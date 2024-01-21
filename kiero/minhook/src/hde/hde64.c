Version 4
SHEET 1 1592 836
WIRE 144 -112 -608 -112
WIRE 272 -112 144 -112
WIRE 496 -112 368 -112
WIRE 544 -112 496 -112
WIRE 608 -112 544 -112
WIRE 704 -112 608 -112
WIRE -608 -96 -608 -112
WIRE 608 -96 608 -112
WIRE 704 -96 704 -112
WIRE 144 -80 144 -112
WIRE 352 -32 352 -64
WIRE -608 0 -608 -16
WIRE 608 0 608 -32
WIRE 704 0 704 -16
WIRE 144 16 144 0
WIRE 0 80 -176 80
WIRE 352 80 352 48
WIRE 352 80 288 80
WIRE 384 80 352 80
WIRE 464 80 448 80
WIRE 544 80 544 -112
WIRE -176 96 -176 80
WIRE 0 128 -64 128
WIRE 416 128 288 128
WIRE 496 128 496 -112
WIRE 496 128 416 128
WIRE -64 160 -64 128
WIRE 544 176 544 160
WIRE 544 176 288 176
WIRE -176 192 -176 176
WIRE 416 192 416 128
WIRE -656 208 -672 208
WIRE -224 208 -576 208
WIRE 544 208 544 176
WIRE -224 256 -240 256
WIRE -64 256 -64 224
WIRE 96 256 96 224
WIRE 96 256 -64 256
WIRE 144 256 96 256
WIRE 192 256 192 224
WIRE 192 256 144 256
WIRE 416 256 192 256
WIRE 144 272 144 256
WIRE -176 288 -176 272
WIRE 544 304 544 288
WIRE 144 368 144 352
FLAG 144 368 0
FLAG -608 0 0
FLAG 464 80 0
FLAG 544 304 0
FLAG 608 0 0
FLAG 704 0 0
FLAG -672 208 0
FLAG -176 288 0
FLAG -240 256 0
SYMBOL cap -80 160 R0
SYMATTR InstName C1
SYMATTR Value 10n
SYMBOL nmos 272 -64 R270
WINDOW 0 54 45 VTop 2
WINDOW 3 -11 74 VLeft 2
SYMATTR InstName Q1
SYMATTR Value IRLHS6342
SYMBOL voltage -608 -112 R0
WINDOW 123 0 0 Left 2
WINDOW 39 24 44 Left 2
SYMATTR InstName V1
SYMATTR Value PWL(0 0 0.8u 30 340m 30 341m 12 500m 12 500.8m 30)
SYMBOL cap 592 -96 R0
SYMATTR InstName C2
SYMATTR Value 220�
SYMBOL cap 384 96 R270
WINDOW 0 32 32 VTop 2
WINDOW 3 0 32 VBottom 2
SYMATTR InstName C3
SYMATTR Value 0.01�
SYMBOL res 528 64 R0
SYMATTR InstName R1
SYMATTR Value 12.4K
SYMBOL res 128 256 R0
SYMATTR InstName R2
SYMATTR Value 1.91K
SYMBOL res 336 -48 R0
SYMATTR InstName R3
SYMATTR Value 10
SYMBOL res 528 192 R0
SYMATTR InstName R4
SYMATTR Value 169K
SYMBOL res 688 -112 R0
SYMATTR InstName R5
SYMATTR Value 100
SYMBOL res 128 -96 R0
SYMATTR InstName R6
SYMATTR Value 29.4K
SYMBOL cap 400 192 R0
SYMATTR InstName C4
SYMATTR Value 0.47�
SYMBOL voltage -560 208 R90
WINDOW 123 68 56 VTop 2
WINDOW 39 50 56 VTop 2
WINDOW 3 32 56 VTop 2
WINDOW 0 -32 56 VBottom 2
SYMATTR Value PWL(0 0 340m 0 340.01m 1 340.8m 1 340.81m 0)
SYMATTR InstName V2
SYMBOL sw -176 288 M180
WINDOW 0 28 81 Left 2
WINDOW 3 24 16 Left 2
SYMATTR InstName S1
SYMATTR Value X
SYMBOL res -192 80 R0
SYMATTR InstName R7
SYMATTR Value 470K
SYMBOL LTC4366-1 144 160 R0
SYMATTR InstName U1
TEXT 320 336 Left 2 !.tran 11
TEXT -512 344 Left 2 !.model X SW(Ron=87 Roff=1T Vt=0.5 Vh=-.4)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               Version 4
SHEET 1 1996 804
WIRE -304 -48 -496 -48
WIRE -128 -48 -304 -48
WIRE -48 -48 -128 -48
WIRE 32 -48 -48 -48
WIRE 160 -48 128 -48
WIRE 368 -48 256 -48
WIRE 432 -48 368 -48
WIRE 496 -48 432 -48
WIRE 624 -48 496 -48
WIRE 496 -32 496 -48
WIRE 624 -32 624 -48
WIRE 112 32 112 0
WIRE 144 32 112 32
WIRE 176 32 176 0
WIRE 176 32 144 32
WIRE 144 48 144 32
WIRE 496 64 496 32
WIRE 624 64 624 48
WIRE -128 80 -128 -48
WIRE -304 96 -304 -48
WIRE -48 112 -48 -48
WIRE -16 112 -48 112
WIRE 368 112 368 -48
WIRE 368 112 288 112
WIRE 432 144 432 -48
WIRE -128 176 -128 160
WIRE -16 176 -128 176
WIRE -304 192 -304 176
WIRE -160 192 -304 192
WIRE -304 208 -304 192
WIRE -160 240 -160 192
WIRE -16 240 -160 240
WIRE 432 240 432 224
WIRE 432 240 288 240
WIRE -304 304 -304 288
WIRE -16 304 -304 304
WIRE -304 320 -304 304
WIRE 144 368 144 352
WIRE -496 400 -496 -48
WIRE -304 416 -304 400
WIRE -496 496 -496 480
FLAG -496 -48 IN
FLAG 624 -48 OUT
FLAG 144 368 0
FLAG -496 496 0
FLAG -304 416 0
FLAG 624 64 0
FLAG 496 64 0
SYMBOL res -144 176 M180
WINDOW 0 36 76 Left 2
WINDOW 3 36 40 Left 2
SYMATTR InstName R1
SYMATTR Value 510K
SYMBOL res -320 80 R0
SYMATTR InstName R2
SYMATTR Value 1820K
SYMBOL res -320 192 R0
SYMATTR InstName R3
SYMATTR Value 243K
SYMBOL res -320 304 R0
SYMATTR InstName R4
SYMATTR Value 59K
SYMBOL nmos 32 0 R270
WINDOW 0 56 49 VTop 2
WINDOW 3 -16 67 VLeft 2
SYMATTR InstName Q1
SYMATTR Value Si4850EY
SYMBOL nmos 256 0 M270
WINDOW 0 53 50 VTop 2
WINDOW 3 -16 72 VLeft 2
SYMATTR InstName Q2
SYMATTR Value Si4850EY
SYMBOL cap 480 -32 R0
SYMATTR InstName C1
SYMATTR Value 100�
SYMBOL res 416 128 R0
SYMATTR InstName R5
SYMATTR Value 10K
SYMBOL SpecialFunctions\\LTC4365 144 272 R0
SYMATTR InstName U1
SYMBOL voltage -496 384 R0
WINDOW 123 24 146 Left 2
WINDOW 39 24 125 Left 2
SYMATTR Value PWL(0 0 10m 12 60m 12 70m 12 80m 3.125 85m 3.125 85.1m 2.25 90m 2.25 100m 12 140m 12 140.1m 12 150m 19.825 155m 19.825 155.1m 19.825 165m 12 205m 12)
SYMATTR InstName V1
SYMBOL res 608 -48 R0
SYMATTR InstName Rload
SYMATTR Value 34
TEXT 488 376 Left 2 !.tran 210m
TEXT 728 56 Left 1 ;OV/UV Test Jig\n \nThis circuit tests the LT4365's behavior with "normal" Overvoltage and Undervoltage\nconditions.  The part is configured to pass 12V nominally, down to 3V and up to 18V,\nthe same typical automotive application in the datasheet.\n \nV(in) is driven to 12V and held until the part turns on and stabilizes.  \nV(in) is then driven below 3V to test the Undervoltage lockout, then below 2.5V\nto test the miniumum voltage threshold.\nV(in) is returned to 12V and held until the part is on and stable again.\nV(in) is driven above 18V to test the Overvoltage lockout.\nFinally, V(in) is returned to 12V and held until the part turns on and stabilizes again.
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               Version 4
SHEET 1 1996 804
WIRE -304 -48 -496 -48
WIRE -128 -48 -304 -48
WIRE -48 -48 -128 -48
WIRE 32 -48 -48 -48
WIRE 160 -48 128 -48
WIRE 368 -48 256 -48
WIRE 432 -48 368 -48
WIRE 496 -48 432 -48
WIRE 624 -48 496 -48
WIRE 496 -32 496 -48
WIRE 624 -32 624 -48
WIRE 112 32 112 0
WIRE 144 32 112 32
WIRE 176 32 176 0
WIRE 176 32 144 32
WIRE 144 48 144 32
WIRE 496 64 496 32
WIRE 624 64 624 48
WIRE -128 80 -128 -48
WIRE -304 96 -304 -48
WIRE -48 112 -48 -48
WIRE -16 112 -48 112
WIRE 368 112 368 -48
WIRE 368 112 288 112
WIRE 432 144 432 -48
WIRE -128 176 -128 160
WIRE -16 176 -128 176
WIRE -304 192 -304 176
WIRE -160 192 -304 192
WIRE -304 208 -304 192
WIRE -160 240 -160 192
WIRE -16 240 -160 240
WIRE 432 240 432 224
WIRE 432 240 288 240
WIRE -304 304 -304 288
WIRE -16 304 -304 304
WIRE -304 320 -304 304
WIRE 144 368 144 352
WIRE -496 400 -496 -48
WIRE -304 416 -304 400
WIRE -496 496 -496 480
FLAG -496 -48 IN
FLAG 624 -48 OUT
FLAG 144 368 0
FLAG -496 496 0
FLAG -304 416 0
FLAG 624 64 0
FLAG 496 64 0
SYMBOL res -144 176 M180
WINDOW 0 36 76 Left 2
WINDOW 3 36 40 Left 2
SYMATTR InstName R1
SYMATTR Value 510K
SYMBOL res -320 80 R0
SYMATTR InstName R2
SYMATTR Value 1820K
SYMBOL res -320 192 R0
SYMATTR InstName R3
SYMATTR Value 243K
SYMBOL res -320 304 R0
SYMATTR InstName R4
SYMATTR Value 59K
SYMBOL nmos 3