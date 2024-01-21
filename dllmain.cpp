#include "pch.h"
#include "includes.h"
#include <codecvt>

DWORD gameModule = (DWORD)GetModuleHandle("GameAssembly.dll");

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

HANDLE process_handle;

bool init = false;

//CHEAT VARS

bool show = true;
static int switchTabs = 0;
static float playerSpeed = 1.f;
static float playerS = 1.f;
static bool localPlayerSpeed = false;
static bool crewLight = false;
static float crewS = 1.f;
static bool impostorLight = false;
static float impostorS = 1.f;
static bool killTime = false;
static float killS = 20.f;
static bool killDistanceCheckbox = false;
static int killdist = 1;

void InitImGui()
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
    ImGui_ImplWin32_Init(window);
    ImGui_ImplDX11_Init(pDevice, pContext);


}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);

}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
    if (!init)
    {
        if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
        {
            pDevice->GetImmediateContext(&pContext);
            DXGI_SWAP_CHAIN_DESC sd;
            pSwapChain->GetDesc(&sd);
            window = sd.OutputWindow;
            ID3D11Texture2D* pBackBuffer;
            pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
            pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
            pBackBuffer->Release();
            oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
            InitImGui();
            init = true;

        }

        else
            return oPresent(pSwapChain, SyncInterval, Flags);
    }

    if (GetAsyncKeyState(VK_END)) {
        kiero::shutdown();
        return 0;
    }

    if (GetAsyncKeyState(VK_INSERT) & 1)
    {
        show = !show;
    }

    UINT* localPlayerPtr = (UINT*)(gameModule + 0x1468910);

    if (show)
    {
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        ImGui::SetNextWindowSize({ 325, 0 });
        ImGui::Begin("Among Us");
        ImGui::SetWindowSize({ 325, 0 }, ImGuiCond_Always);
        ImGui::SetNextWindowSize({ 325, 0 });
        auto& style = ImGui::GetStyle();
        style.Colors[ImGuiCol_TitleBg] = ImVec4{ 164.f / 255.f, 130.f / 255.f, 21.f / 255.f, 1.f };
        style.Colors[ImGuiCol_TitleBgActive] = ImVec4{ 164.f / 255.f, 130.f / 255.f, 21.f / 255.f, 1.f };
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4{ 164.f / 255.f, 130.f / 255.f, 21.f / 255.f, 1.f };
        style.Colors[ImGuiCol_Button] = ImVec4{ 164.f / 255.f, 130.f / 255.f, 21.f / 255.f, 1.f };
      
        //ImGui::ShowStyleEditor();

        // Tabs
        if (ImGui::Button("Photons", ImVec2(100.0f, 0.0f))) { switchTabs = 0; }

        switch (switchTabs)
        {
        case 0: //Settings Tab

            ImGui::Checkbox("Speed", &localPlayerSpeed);
            ImGui::SameLine(0.0, 12.0f);
            ImGui::SliderFloat(" ", &playerS, 0.25f, 5.f);
            //static char speedBuf[8] = "";  
            //ImGui::InputText("", speedBuf, 8, ImGuiInputTextFlags_CharsDecimal);
            //playerS = strtof(speedBuf, nullptr); //Convert Char array to Float

            if (localPlayerPtr) //Speed
            {
                if (localPlayerSpeed)
                {
                    uintptr_t speedAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x14 });
                    float* playerSpeed = (float*)speedAddr;
                    *playerSpeed = playerS;
                }
                else
                {
                    intptr_t speedAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x14 });
                    float* playerSpeedlim = (float*)speedAddr;
                    *playerSpeedlim = 1.f;
                }
            }

            ImGui::Checkbox("Crewmate Vision", &crewLight);
            ImGui::SameLine(0.0, 12.0f);
            ImGui::SliderFloat("", &crewS, 0.10f, 5.f);

            if (localPlayerPtr) //CrewLight
            {
                if (crewLight)
                {
                    uintptr_t crewLightAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x18 });
                    float* crewLightP = (float*)crewLightAddr;
                    *crewLightP = crewS;
                }
                else
                {
                    intptr_t crewLightAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x18 });
                    float* crewLightlim = (float*)crewLightAddr;
                    *crewLightlim = 1.f;
                }
            }

            ImGui::Checkbox("Kill Cool Down", &killTime);
            ImGui::SameLine(0.0, 10.0f);
            ImGui::SliderFloat("  ", &killS, 1.f, 15.f);

            if (localPlayerPtr)
            {
                if (killTime)
                {
                    uintptr_t KilltimeAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x20 });
                    float* KillTimerL = (float*)KilltimeAddr;
                    *KillTimerL = killS;
                }
                else
                {
                    uintptr_t KilltimeAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x20 });
                    float* KillTimerL = (float*)KilltimeAddr;
                    *KillTimerL = 15.f;
                }
            }
           
            ImGui::Checkbox("Impostor Vision", &impostorLight);
            ImGui::SameLine(0.0, 12.0f);
            ImGui::SliderFloat("       ", &impostorS, 0.15f, 5.f);

            if (localPlayerPtr) //impostorLight
            {
                if (impostorLight)
                {
                    uintptr_t impostorLightAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x1C });
                    float* impostorLightP = (float*)impostorLightAddr;
                    *impostorLightP = impostorS;
                }
                else
                {
                    intptr_t crewLightAddr = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x1C });
                    float* impostorLightlim = (float*)crewLightAddr;
                    *impostorLightlim = 1.f;
                }
            }

            ImGui::Checkbox("Kill Distance", &killDistanceCheckbox); //GameAssembly.dll + 0x1468910
            ImGui::SameLine(0.0, 10.0f);
            ImGui::SliderInt("     ", &killdist, 1, 3);

            if (killDistanceCheckbox)
            {
                uintptr_t killdistaddy = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x40 });
                int* killd = (int*)killdistaddy;
                *killd = killdist;
            }
            else
            {
                uintptr_t killdistaddy = memtools::FindDMAAddyInternal(gameModule + 0x1468910, { 0x5C, 0x4, 0x40 });
                int* killd = (int*)killdistaddy;
                *killd = 1;
            }
        }

        ImGui::End();

        ImGui::Render();

        pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    }
    return oPresent(pSwapChain, SyncInterval, Flags);
}


DWORD WINAPI MainThread(LPVOID lpReserved)
{
    bool init_hook = false;
    do
    {
        if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
        {
            kiero::bind(8, (void**)&oPresent, hkPresent);
            init_hook = true;
        }
    } while (!init_hook);

    return TRUE;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        kiero::shutdown();
        break;
    }
    return TRUE;
}

