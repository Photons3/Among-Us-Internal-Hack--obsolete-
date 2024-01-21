Version 4
SHEET 1 1160 1096
WIRE -256 -80 -1440 -80
WIRE -16 -80 -256 -80
WIRE 80 -80 -16 -80
WIRE 288 -80 176 -80
WIRE 320 -80 288 -80
WIRE 416 -80 400 -80
WIRE 576 -80 416 -80
WIRE 688 -80 576 -80
WIRE -1440 -64 -1440 -80
WIRE 576 -64 576 -80
WIRE 688 -64 688 -80
WIRE 160 -16 160 -32
WIRE -1440 32 -1440 16
WIRE 576 32 576 0
WIRE 688 32 688 16
WIRE 160 80 160 64
WIRE 208 80 160 80
WIRE -16 128 -16 -80
WIRE -256 192 -256 -80
WIRE -16 256 -16 208
WIRE 160 256 160 80
WIRE 288 256 288 -80
WIRE 416 256 416 -80
WIRE -256 352 -256 272
WIRE -256 352 -368 352
WIRE -128 352 -256 352
WIRE -80 352 -128 352
WIRE 528 352 480 352
WIRE 624 352 608 352
WIRE -368 368 -368 352
WIRE -256 368 -256 352
WIRE -368 448 -368 432
WIRE -256 448 -256 432
WIRE -128 448 -128 352
WIRE -80 448 -128 448
WIRE 496 448 480 448
WIRE 128 528 128 512
WIRE 320 528 320 512
WIRE 320 608 320 592
WIRE -128 640 -128 448
WIRE 624 640 624 352
WIRE 624 640 -128 640
FLAG -1440 32 0
FLAG 576 32 0
FLAG 688 32 0
FLAG 320 608 0
FLAG 128 528 0
FLAG -256 448 0
FLAG -368 448 0
FLAG 688 -80 OUT
FLAG -1440 -80 IN
FLAG 208 224 0
FLAG 496 448 0
SYMBOL res 144 -32 R0
SYMATTR InstName R1
SYMATTR Value 10
SYMBOL res 304 -64 R270
WINDOW 0 32 56 VTop 2
WINDOW 3 0 56 VBottom 2
SYMATTR InstName R2
SYMATTR Value 10m
SYMBOL nmos 80 -32 R270
WINDOW 0 57 42 VTop 2
WINDOW 3 -14 72 VLeft 2
SYMATTR InstName Q1
SYMATTR Value FDB33N25
SYMBOL cap 304 528 R0
SYMATTR InstName C2
SYMATTR Value 0.2�
SYMBOL cap 560 -64 R0
SYMATTR InstName Cload
SYMATTR Value 22�
SYMBOL voltage -1440 -80 R0
WINDOW 123 24 138 Left 2
WINDOW 39 24 117 Left 2
SYMATTR Value PWL(0 0 20u 0 50u 12 100m 12 101m 80 200m 80 201m 12 10 12 +100n 0 +100m 0 +100n 12)
SYMATTR InstName V1
SYMBOL zener -272 432 M180
WINDOW 0 24 64 Left 2
WINDOW 3 24 0 Left 2
SYMATTR InstName D1
SYMATTR Value 1N5371B
SYMBOL cap -384 368 R0
SYMATTR InstName C4
SYMATTR Value .1�
SYMBOL res 672 -80 R0
SYMATTR InstName Rload
SYMATTR Value 100
SYMBOL res 624 336 R90
WINDOW 0 0 56 VBottom 2
WINDOW 3 32 56 VTop 2
SYMATTR InstName R7
SYMATTR Value 40K
SYMBOL cap 192 80 R0
WINDOW 3 27 55 Left 2
SYMATTR Value 47n
SYMATTR InstName C1
SYMBOL res 192 128 R0
WINDOW 3 39 67 Left 2
SYMATTR Value 100
SYMATTR InstName R4
SYMBOL LTC4380-1 208 384 R0
SYMATTR InstName U1
SYMBOL res -272 176 R0
SYMATTR InstName R6
SYMATTR Value 10K
SYMBOL res -32 112 R0
SYMATTR InstName R3
SYMATTR Value 80K
TEXT 704 616 Left 2 !.tran 12
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        Version 4
SHEET 1 3984 844
WIRE 1520 -464 1520 -480
WIRE 1520 -368 1520 -384
WIRE 1744 -368 1520 -368
WIRE 2096 -368 1744 -368
WIRE 1520 -352 1520 -368
WIRE 1744 -352 1744 -368
WIRE 2096 -320 2096 -368
WIRE 2208 -288 2208 -304
WIRE 2208 -192 2208 -208
WIRE 2208 -192 2064 -192
WIRE 2208 -144 2208 -192
WIRE 2400 -80 2400 -112
WIRE 1296 16 1296 0
WIRE 1408 16 1408 0
WIRE 1744 16 1744 0
WIRE 1856 16 1856 0
WIRE 1856 16 1744 16
WIRE 1968 16 1968 0
WIRE 1968 16 1856 16
WIRE 2096 16 2096 -256
WIRE 2096 16 1968 16
WIRE 2208 16 2208 -80
WIRE 2208 16 2096 16
WIRE 2400 16 2400 0
WIRE 2400 16 2208 16
WIRE 864 80 864 64
WIRE 1520 128 1520 0
WIRE 864 176 864 160
WIRE 1232 176 864 176
WIRE 1296 176 1296 96
WIRE 1296 176 1232 176
WIRE 1440 176 1296 176
WIRE 1744 176 1744 16
WIRE 1744 176 1536 176
WIRE 800 240 800 224
WIRE 1632 288 1632 0
WIRE 800 336 800 320
WIRE 1232 336 800 336
WIRE 1408 336 1408 96
WIRE 1408 336 1232 336
WIRE 1552 336 1408 336
WIRE 1744 336 1744 176
WIRE 1744 336 1648 336
FLAG 1520 -480 0
FLAG 864 64 0
FLAG 800 224 0
FLAG 2400 16 Out
FLAG 1232 176 InA
FLAG 1232 336 InB
FLAG 2400 -112 0
FLAG 2208 -304 0
SYMBOL VOLTAGE 864 64 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName V2
SYMATTR Value PWL(0 0 50m 72 100m 0)
SYMBOL LTC4371 1632 -192 R0
SYMATTR InstName U1
SYMBOL nmos 1552 288 M90
WINDOW 0 -21 61 VLeft 2
WINDOW 3 53 47 VTop 2
WINDOW 123 83 46 VTop 2
SYMATTR InstName M2
SYMATTR Value IPT020N10N3
SYMATTR Value2 M=2
SYMBOL res 1504 -480 R0
SYMATTR InstName Rz
SYMATTR Value 30K
SYMBOL cap 2080 -320 R0
SYMATTR InstName C1
SYMATTR Value 2.2�
SYMBOL nmos 1440 128 M90
WINDOW 0 -21 55 VLeft 2
WINDOW 3 59 56 VTop 2
WINDOW 123 88 47 VTop 2
SYMATTR InstName M1
SYMATTR Value IPT020N10N3
SYMATTR Value2 M=2
SYMBOL res 1280 0 R0
SYMATTR InstName RDA
SYMATTR Value 20K
SYMBOL res 1392 0 R0
SYMATTR InstName RDB
SYMATTR Value 20K
SYMBOL res 2192 -304 R0
SYMATTR InstName R1
SYMATTR Value 33K
SYMBOL VOLTAGE 800 224 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName V1
SYMATTR Value 48
SYMBOL CURRENT 2400 -80 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName I1
SYMATTR Value 50
SYMBOL LED 2192 -144 R0
SYMATTR InstName D1
SYMATTR Value QTLP690C
TEXT 2072 208 Left 2 !.tran 100m startup
TEXT 1912 104 Left 2 ;Note:\n   M=2 indicates two Power MOSFETS in parallel.
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      Version 4
SHEET 1 2404 680
WIRE 144 -80 -368 -80
WIRE 240 -80 144 -80
WIRE 352 -80 240 -80
WIRE 704 -80 448 -80
WIRE -368 -64 -368 -80
WIRE 144 -64 144 -80
WIRE -368 32 -368 16
WIRE 144 32 144 0
WIRE 240 32 240 -80
WIRE 368 32 368 -32
WIRE 16 80 0 80
WIRE 704 80 704 -80
WIRE 704 80 496 80
WIRE 736 80 704 80
WIRE 832 80 816 80
WIRE 912 80 832 80
WIRE 1072 80 912 80
WIRE 912 96 912 80
WIRE 1072 96 1072 80
WIRE -80 128 -96 128
WIRE 16 128 -16 128
WIRE 592 128 496 128
WIRE 704 128 704 80
WIRE 704 128 672 128
WIRE 16 176 0 176
WIRE 528 176 496 176
WIRE 704 176 608 176
WIRE 912 192 912 160
WIRE 1072 192 1072 176
WIRE -128 224 -224 224
WIRE 16 224 -128 224
WIRE 704 224 704 176
WIRE 704 224 496 224
WIRE 736 224 704 224
WIRE 832 224 832 80
WIRE 832 224 816 224
WIRE -224 240 -224 224
WIRE -128 240 -128 224
WIRE 16 272 0 272
WIRE 544 272 496 272
WIRE 544 288 544 272
WIRE -224 336 -224 304
WIRE -128 336 -128 320
WIRE 144 336 144 320
WIRE 544 368 544 352
WIRE 368 384 368 320
WIRE 144 432 144 400
WIRE 144 432 -96 432
WIRE 240 432 240 320
WIRE 240 432 144 432
WIRE 352 432 240 432
WIRE 704 432 704 224
WIRE 704 432 448 432
WIRE -96 448 -96 432
WIRE -96 544 -96 528
FLAG -96 544 0
FLAG 544 368 0
FLAG 0 272 0
FLAG -128 336 0
FLAG 912 192 0
FLAG 1072 192 0
FLAG -368 32 0
FLAG 0 176 0
FLAG 0 80 0
FLAG -368 -80 IN2
FLAG -96 432 IN1
FLAG 1072 80 OUT
FLAG -224 336 0
FLAG -96 128 0
SYMBOL nmos 448 384 R90
WINDOW 0 -13 64 VLeft 2
WINDOW 3 55 37 VTop 2
SYMATTR InstName Q1
SYMATTR Value Si4864DY
SYMBOL cap 128 336 R0
SYMATTR InstName C1
SYMATTR Value 39n
SYMBOL voltage -96 432 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName V1
SYMATTR Value PWL(0 0 1m 12)
SYMBOL cap 528 288 R0
SYMATTR InstName C2
SYMATTR Value 0.18�
SYMBOL res -144 224 R0
SYMATTR InstName R1
SYMATTR Value 301K
SYMBOL res 624 160 R90
WINDOW 0 0 56 VBottom 2
WINDOW 3 32 56 VTop 2
SYMATTR InstName R2
SYMATTR Value 100K
SYMBOL current 1072 96 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName I1
SYMATTR Value PULSE(0 6 10u 100u 100u 10 20)
SYMBOL res 720 208 M90
WINDOW 0 0 56 VBottom 2
WINDOW 3 32 56 VTop 2
SYMATTR InstName R3
SYMATTR Value 2m
SYMBOL res 720 64 M90
WINDOW 0 0 56 VBottom 2
WINDOW 3 32 56 VTop 2
SYMATTR InstName R4
SYMATTR Value 2m
SYMBOL res 576 144 R270
