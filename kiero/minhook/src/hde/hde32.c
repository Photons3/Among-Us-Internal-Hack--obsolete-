Version 4
SHEET 1 880 680
WIRE 16 144 -112 144
WIRE 288 144 272 144
WIRE 384 144 288 144
WIRE 480 144 384 144
WIRE -112 160 -112 144
WIRE 384 160 384 144
WIRE 480 160 480 144
WIRE 16 208 -16 208
WIRE -112 256 -112 240
WIRE 384 256 384 224
WIRE 480 256 480 240
WIRE 16 272 -16 272
WIRE 352 272 272 272
WIRE 352 288 352 272
WIRE 16 336 -16 336
WIRE 352 384 352 368
WIRE 16 400 -112 400
WIRE 288 400 288 144
WIRE 288 400 272 400
WIRE -112 416 -112 400
WIRE 352 480 352 464
WIRE -112 512 -112 496
FLAG -16 208 0
FLAG -112 256 0
FLAG -16 272 0
FLAG 384 256 0
FLAG 480 256 0
FLAG 352 480 0
FLAG -16 336 0
FLAG -112 512 0
SYMBOL voltage -112 144 R0
WINDOW 0 17 15 Left 2
WINDOW 3 21 97 Left 2
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName Wall
SYMATTR Value 5
SYMBOL res 464 144 R0
SYMATTR InstName Load
SYMATTR Value 10
SYMBOL res 336 272 R0
SYMATTR InstName R2
SYMATTR Value 470K
SYMBOL voltage 352 368 R0
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName Vcc
SYMATTR Value 5
SYMBOL cap 368 160 R0
WINDOW 0 24 16 Left 2
SYMATTR InstName C2
SYMATTR Value 4.7�
SYMBOL voltage -112 400 R0
WINDOW 0 17 15 Left 2
WINDOW 3 21 97 Left 2
WINDOW 123 0 0 Left 2
WINDOW 39 0 0 Left 2
SYMATTR InstName Battery
SYMATTR Value 3.6
SYMBOL LTC4413-1 144 272 R0
SYMATTR InstName U1
TEXT 48 480 Left 2 !.tran 1m startup
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        Version 4
SHEET 1 2500 1716
WIRE 1760 1024 1360 1024
WIRE 2096 1024 1824 1024
WIRE 1360 1040 1360 1024
WIRE 1968 1104 1552 1104
WIRE 2096 1104 2096 1024
WIRE 2096 1104 2064 1104
WIRE 2144 1104 2096 1104
WIRE 2272 1104 2144 1104
WIRE 2368 1104 2272 1104
WIRE 2272 1120 2272 1104
WIRE 2368 1120 2368 1104
WIRE 1360 1136 1360 1120
WIRE 2144 1184 2144 1104
WIRE 1552 1216 1552 1104
WIRE 1680 1216 1552 1216
WIRE 2096 1216 2096 1104
WIRE 2096 1216 1936 1216
WIRE 2272 1216 2272 1184
WIRE 2368 1216 2368 1200
WIRE 1552 1232 1552 1216
WIRE 1680 1296 1664 1296
WIRE 2048 1296 2048 1152
WIRE 2048 1296 1936 1296
WIRE 1552 1328 1552 1312
WIRE 1680 1376 1664 1376
WIRE 2144 1376 2144 1264
WIRE 2144 1376 1936 1376
FLAG 1664 1376 0
FLAG 1664 1296 0
FLAG 2272 1216 0
FLAG 2368 1216 0
FLAG 1552 1328 0
FLAG 1360 1136 0
SYMBOL schottky 1760 1040 R270
WINDOW 0 32 32 VTop 2
WINDOW 3 0 32 VBottom 2
SYMATTR InstName D1
SYMATTR Value 1N5819
SYMBOL PMOS 1968 1152 R270
WINDOW 0 90 48 VCenter 2
WINDOW 3 63 45 VCenter 2
SYMATTR InstName Q1
SYMATTR Value FDC638P
SYMBOL RES 2128 1168 R0
SYMATTR InstName R1
SYMATTR Value 470K
SYMBOL cap 2256 1120 R0
SYMATTR InstName C1
SYMATTR Value 10�
SYMBOL res 2352 1104 R0
SYMATTR InstName R2
SYMATTR Value 100
SYMBOL VOLTAGE 1552 1216 R0
SYMATTR InstName V1
SYMATTR Value 5
SYMBOL voltage 1360 1024 R0
SYMATTR InstName V2
SYMATTR Value PWL(0 0 1 7)
SYMBOL PowerProducts\\LTC4412HV 1808 1296 R0
SYMATTR InstName U1
TEXT 2208 1368 Left 2 !.tran 1
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         Version 4
SHEET 1 2500 1444
WIRE 1760 1024 1344 1024
WIRE 2064 1024 1824 1024
WIRE 1344 1040 1344 1024
WIRE 1936 1104 1552 1104
WIRE 2064 1104 2064 1024
WIRE 2064 1104 2032 1104
WIRE 2112 1104 2064 1104
WIRE 2240 1104 2112 1104
WIRE 2336 1104 2240 1104
WIRE 2240 1120 2240 1104
WIRE 2336 1120 2336 1104
WIRE 1344 1136 1344 1120
WIRE 2112 1184 2112 1104
WIRE 1552 1216 1552 1104
WIRE 1680 1216 1552 1216
WIRE 2064 1216 2064 1104
WIRE 2064 1216 1936 1216
WIRE 2240 1216 2240 1184
WIRE 2336 1216 2336 1200
WIRE 1552 1232 1552 1216
WIRE 1680 1296 1648 1296
WIRE 2016 1296 2016 1152
WIRE 2016 1296 1936 1296
WIRE 1552 1328 1552 1312
WIRE 1680 1376 1648 1376
WIRE 2112 1376 2112 1264
WIRE 2112 1376 1936 1376
FLAG 1648 1376 0
FLAG 1648 1296 0
FLAG 2240 1216 0
FLAG 2336 1216 0
FLAG 1552 1328 0
FLAG 1344 1136 0
FLAG 2336 1104 OUT
SYMBOL POWERPRODUCTS\\LTC4412 1808 1296 R0
SYMATTR InstName U1
SYMBOL schottky 1760 1040 R270
WINDOW 0 32 32 VTop 2
WINDOW 3 0 32 VBottom 2
SYMATTR InstName D1
SYMATTR Value 1N5819
SYMBOL PMOS 1936 1152 R270
WINDOW 0 90 48 VCenter 2
WINDOW 3 63 45 VCenter 2
SYMATTR InstName Q1
SYMATTR Value FDC638P
SYMBOL RES 2096 116