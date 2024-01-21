Version 4
SHEET 1 1612 760
WIRE 288 -240 -400 -240
WIRE -400 -176 -400 -240
WIRE -400 -176 -832 -176
WIRE -288 -176 -400 -176
WIRE -144 -176 -192 -176
WIRE 32 -176 -48 -176
WIRE 48 -176 32 -176
WIRE 352 -176 128 -176
WIRE 464 -176 352 -176
WIRE -832 -160 -832 -176
WIRE 352 -160 352 -176
WIRE 464 -160 464 -176
WIRE 528 -144 512 -144
WIRE -208 -96 -208 -128
WIRE -128 -96 -128 -128
WIRE -128 -96 -208 -96
WIRE -64 -96 -128 -96
WIRE 592 -96 512 -96
WIRE 592 -80 592 -96
WIRE -832 -64 -832 -80
WIRE 352 -64 352 -96
WIRE 464 -64 464 -80
WIRE -272 -32 -288 -32
WIRE -192 -32 -208 -32
WIRE -64 -32 -64 -96
WIRE -64 -32 -112 -32
WIRE -64 16 -64 -32
WIRE 32 16 32 -176
WIRE 128 16 128 -176
WIRE 592 16 592 0
WIRE 288 64 288 -240
WIRE -400 80 -400 -176
WIRE -128 80 -400 80
WIRE -400 96 -400 80
WIRE 288 160 288 144
WIRE 288 160 192 160
WIRE -128 176 -400 176
WIRE -400 192 -400 176
WIRE -128 272 -400 272
WIRE -400 288 -400 272
WIRE 208 288 192 288
WIRE 288 288 272 288
WIRE -128 368 -400 368
WIRE -400 384 -400 368
WIRE 32 448 32 432
WIRE -400 480 -400 464
FLAG -832 -176 IN
FLAG 464 -176 OUT
FLAG -832 -64 0
FLAG 288 288 0
FLAG 32 448 0
FLAG -400 480 0
FLAG 464 -64 0
FLAG 592 16 0
FLAG 528 -144 0
FLAG 352 -64 0
FLAG -288 -32 0
SYMBOL res -416 272 R0
SYMATTR InstName R1
SYMATTR Value 121K
SYMBOL res -416 176 R0
SYMATTR InstName R2
SYMATTR Value 1500K
SYMBOL res -416 80 R0
SYMATTR InstName R3
SYMATTR Value 464K
SYMBOL nmos -288 -128 R270
WINDOW 0 55 49 VTop 2
WINDOW 3 -12 73 VLeft 2
SYMATTR InstName M1
SYMATTR Value Sir870ADP
SYMBOL nmos -48 -128 M270
WINDOW 0 57 49 VTop 2
WINDOW 3 -13 62 VLeft 2
SYMATTR InstName M2
SYMATTR Value SiR870ADP
SYMBOL res 272 48 R0
SYMATTR InstName R4
SYMATTR Value 100K
SYMBOL res -208 -16 R270
WINDOW 0 32 56 VTop 2
WINDOW 3 0 56 VBottom 2
SYMATTR InstName R5
SYMATTR Value 22K
SYMBOL cap -208 -48 R90
WINDOW 0 0 32 VBottom 2
WINDOW 3 32 32 VTop 2
SYMATTR InstName C2
SYMATTR Value 3.3n
SYMBOL cap 336 -160 R0
SYMATTR InstName C1
SYMATTR Value 100�
SYMBOL voltage -832 -176 R0
WINDOW 123 24 138 Left 2
WINDOW 39 24 117 Left 2
SYMATTR Value PWL(0 -40 200m -40 1.7 70 2 24)
SYMATTR InstName V1
SYMBOL res 32 -160 R270
WINDOW 0 32 56 VTop 2
WINDOW 3 0 56 VBottom 2
SYMATTR InstName R7
SYMATTR Value 5m
SYMBOL cap 208 304 R270
WINDOW 0 32 32 VTop 2
WINDOW 3 0 32 VBottom 2
SYMATTR InstName C3
SYMATTR Value 0.22�
SYMBOL res -416 368 R0
SYMATTR InstName R8
SYMATTR Value 29.4K
SYMBOL sw 464 -176 M0
WINDOW 0 -24 10 Right 2
WINDOW 3 -20 97 Right 2
SYMATTR InstName S1
SYMATTR Value Sload
SYMBOL voltage 592 -96 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName V2
SYMATTR Value PULSE(0 1 2.2 10n 10n 20u 100)
SYMBOL LTC4368-2 32 224 R0
SYMATTR InstName U1
TEXT 280 376 Left 2 !.tran 5\n.model Sload SW(Ron=1 Roff=5 Vt=.5 Vh=-.2)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 Version 4
SHEET 1 2108 760
WIRE 288 -240 -400 -240
WIRE -400 -176 -400 -240
WIRE -400 -176 -816 -176
WIRE -288 -176 -400 -176
WIRE -144 -176 -192 -176
WIRE 32 -176 -48 -176
WIRE 48 -176 32 -176
WIRE 352 -176 128 -176
WIRE 544 -176 352 -176
WIRE -816 -160 -816 -176
WIRE 352 -160 352 -176
WIRE 544 -160 544 -176
WIRE 608 -144 592 -144
WIRE -208 -96 -208 -128
WIRE -128 -96 -128 -128
WIRE -128 -96 -208 -96
WIRE -64 -96 -128 -96
WIRE 720 -96 592 -96
WIRE 352 -80 352 -96
WIRE 720 -80 720 -96
WIRE -816 -64 -816 -80
WIRE 544 -48 544 -80
WIRE -272 -32 -288 -32
WIRE -192 -32 -208 -32
WIRE -64 -32 -64 -96
WIRE -64 -32 -112 -32
WIRE -64 16 -64 -32
WIRE 32 16 32 -176
WIRE 128 16 128 -176
WIRE 720 16 720 0
WIRE 288 64 288 -240
WIRE -400 80 -400 -176
WIRE -128 80 -400 80
WIRE -400 96 -400 80
WIRE 288 160 288 144
WIRE 288 160 192 160
WIRE -128 176 -400 176
WIRE -400 192 -400 176
WIRE -128 272 -400 272
WIRE -400 288 -400 272
WIRE 208 288 192 288
WIRE 288 288 272 288
WIRE -128 368 -400 368
WIRE -400 384 -400 368
WIRE 32 448 32 432
WIRE -400 480 -400 464
FLAG -816 -176 IN
FLAG 544 -176 OUT
FLAG -816 -64 0
FLAG 288 288 0
FLAG 32 448 0
FLAG -400 480 0
FLAG 544 -48 0
FLAG 720 16 0
FLAG 608 -144 0
FLAG 352 -80 0
FLAG -288 -32 0
SYMBOL res -416 272 R0
SYMATTR InstName R1
SYMATTR Value 121K
SYMBOL res -416 176 R0
SYMATTR InstName R2
SYMATTR Value 1500K
SYMBOL res -416 80 R0
SYMATTR InstName R3
SYMATTR Value 464K
SYMBOL nmos -288 -128 R270
WINDOW 0 57 51 VTop 2
WINDOW 3 -14 70 VLeft 2
SYMATTR InstName M1
SYMATTR Value Sir870ADP
SYMBOL nmos -48 -128 M270
WINDOW 0 56 50 VTop 2
WINDOW 3 -13 62 VLeft 2
SYMATTR InstName M2
SYMATTR Value SiR870ADP
SYMBOL res 272 48 R0
SYMATTR InstName R4
SYMATTR Value 100K
SYMBOL res -208 -16 R270
WINDOW 0 32 56 VTop 2
WINDOW 3 0 56 VBottom 2
SYMATTR InstName R5
SYMATTR Value 22K
SYMBOL cap -208 -48 R90
WINDOW 0 0 32 VBottom 2
WINDOW 3 32 32 VTop 2
SYMATTR InstName C2
SYMATTR Value 3.3n
SYMBOL cap 336 -160 R0
SYMATTR InstName C1
SYMATTR Value 100�
SYMBOL voltage -816 -176 R0
WINDOW 123 24 138 Left 2
WINDOW 39 24 117 Left 2
SYMATTR Value PWL(0 -40 200m -40 1.7 70 2 24)
SYMATTR InstName V1
SYMBOL res 32 -160 R270
WINDOW 0 32 56 VTop 2
WINDOW 3 0 56 VBottom 2
SYMATTR InstName R7
SYMATTR Value 5m
SYMBOL cap 208 304 R270
WINDOW 0 32 32 VTop 2
WINDOW 3 0 32 VBottom 2
SYMATTR InstName C3
SYMATTR Value 0.22�
SYMBOL LTC4368-1 32 224 R0
SYMATTR InstName U1
SYMBOL res -416 368 R0
SYMATTR InstName R8
SYMATTR Value 29.4K
SYMBOL sw 544 -176 M0
WINDOW 0 -19 8 Right 2
WINDOW 3 -18 112 Right 2
SYMATTR InstName S1
SYMATTR Value Sload
SYMBOL voltage 720 -96 R0
WINDOW 123 24 138 Left 2
WINDOW 39 24 117 Left 2
SYMATTR InstName V2
SYMATTR Value PULSE(0 1 2.2 10n 10n 20u 100)
TEXT 520 400 Left 2 !.tran 5
TEXT 392 88 Left 2 !.model Sload SW(Ron=1 Roff=5 Vt=.5 Vh=-.2)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Version 4
SHEET 1 3088 804
WIRE -224 -48 -688 -48
WIRE -48 -48 -224 -48
WIRE 32 -48 -48 -48
WIRE 160 -48 128 -48
WIRE 368 -48 256 -48
WIRE 432 -48 368 -48
WIRE 496 -48 432 -48
WIRE 624 -48 496 -48
WIRE -688 -32 -688 -48
WIRE -224 -32 -224 -48
WIRE 496 -32 496 -48
WIRE 624 -32 624 -48
WIRE 112 32 112 0
WIRE 144 32 112 32
WIRE 176 32 176 0
WIRE 176 32 144 32
WIRE 144 48 144 32
WIRE -688 64 -688 48
WIRE -224 64 -224 48
WIRE -80 64 -224 64
WIRE 496 64 496 32
WIRE 624 64 624 48
WIRE -224 80 -224 64
WIRE -48 112 -48 -48
WIRE -16 112 -48 112
WIRE 368 112 368 -48
WIRE 368 112 288 112
WIRE 432 144 432 -48
WIRE -224 176 -224 160
WIRE -112 176 -224 176
WIRE -80 176 -80 64
WIRE -16 176 -80 176
WIRE -224 208 -224 176
WIRE -112 240 -112 176
WIRE -16 240 -112 240
WIRE 432 240 432 224
WIRE 432 240 288 240
WIRE -224 304 -224 288
WIRE -16 304 -224 304
WIRE -224 320 -224 304
WIRE 144 368 144 352
WIRE -224 416 -224 400
FLAG -688 -48 IN
FLAG 624 -48 OUT
FLAG 144 368 0
FLAG -688 64 0
FLAG -224 416 0
FLAG 624 64 0
FLAG 496 64 0
SYMBOL res -240 192 R0
SYMATTR InstName R3
SYMATTR Value 121K
SYMBOL res -240 304 R0
SYMATTR InstName R4
SYMATTR Value 29.4K
SYMBOL nmos 32 0 R270
WINDOW 0 56 49 VTop 2
WINDOW 3 -16 67 VLeft 2
SYMATTR InstName Q1
SYMATTR Value Si7942DP
SYMBOL nmos 256 0 M270
WINDOW 0 53 50 VTop 2
WINDOW 3 -16 72 VLeft 2
SYMATTR InstName Q2
SYMATTR Value Si7942DP
SYMBOL cap 480 -32 R0
SYMATTR InstName C1
SYMATTR Value 10�
SYMBOL res 416 128 R0
SYMATTR InstName R5
SYMATTR Value 10K
SYMBOL voltage -688 -48 R0
WINDOW 123 24 146 Left 2
W