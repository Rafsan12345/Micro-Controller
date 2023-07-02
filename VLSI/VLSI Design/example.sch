DSCH 2.7f
VERSION 6/30/2023 11:00:30 PM
BB(21,-10,104,90)
SYM  #pmos
BB(30,0,50,20)
TITLE 45 5  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                               
REC(31,5,19,15,r)
VIS 2
PIN(50,0,0.000,0.000)s
PIN(30,10,0.000,0.000)g
PIN(50,20,0.030,0.210)d
LIG(30,10,36,10)
LIG(38,10,38,10)
LIG(40,16,40,4)
LIG(42,16,42,4)
LIG(50,4,42,4)
LIG(50,0,50,4)
LIG(50,16,42,16)
LIG(50,20,50,16)
VLG   pmos pmos(drain,source,gate);
FSYM
SYM  #pmos
BB(70,0,90,20)
TITLE 75 5  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                               
REC(70,5,19,15,r)
VIS 2
PIN(70,0,0.000,0.000)s
PIN(90,10,0.000,0.000)g
PIN(70,20,0.030,0.210)d
LIG(90,10,84,10)
LIG(82,10,82,10)
LIG(80,16,80,4)
LIG(78,16,78,4)
LIG(70,4,78,4)
LIG(70,0,70,4)
LIG(70,16,78,16)
LIG(70,20,70,16)
VLG   pmos pmos(drain,source,gate);
FSYM
SYM  #nmos
BB(40,30,60,50)
TITLE 55 35  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                               
REC(41,35,19,15,r)
VIS 2
PIN(60,50,0.000,0.000)s
PIN(40,40,0.000,0.000)g
PIN(60,30,0.030,0.210)d
LIG(50,40,40,40)
LIG(50,46,50,34)
LIG(52,46,52,34)
LIG(60,34,52,34)
LIG(60,30,60,34)
LIG(60,46,52,46)
LIG(60,50,60,46)
VLG   nmos nmos(drain,source,gate);
FSYM
SYM  #nmos
BB(40,60,60,80)
TITLE 55 65  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                               
REC(41,65,19,15,r)
VIS 2
PIN(60,80,0.000,0.000)s
PIN(40,70,0.000,0.000)g
PIN(60,60,0.030,0.070)d
LIG(50,70,40,70)
LIG(50,76,50,64)
LIG(52,76,52,64)
LIG(60,64,52,64)
LIG(60,60,60,64)
LIG(60,76,52,76)
LIG(60,80,60,76)
VLG   nmos nmos(drain,source,gate);
FSYM
SYM  #button3
BB(95,6,104,14)
TITLE 100 10  #button
MODEL 59
PROP                                                                                                                                    
REC(97,7,6,6,r)
VIS 1
PIN(95,10,0.000,0.000)in3
LIG(96,10,95,10)
LIG(104,14,104,6)
LIG(96,14,104,14)
LIG(96,6,96,14)
LIG(104,6,96,6)
LIG(103,13,103,7)
LIG(97,13,103,13)
LIG(97,7,97,13)
LIG(103,7,97,7)
FSYM
SYM  #button1
BB(21,6,30,14)
TITLE 25 10  #button
MODEL 59
PROP                                                                                                                                    
REC(22,7,6,6,r)
VIS 1
PIN(30,10,0.000,0.000)in1
LIG(29,10,30,10)
LIG(21,14,21,6)
LIG(29,14,21,14)
LIG(29,6,29,14)
LIG(21,6,29,6)
LIG(22,13,22,7)
LIG(28,13,22,13)
LIG(28,7,28,13)
LIG(22,7,28,7)
FSYM
SYM  #vss
BB(55,82,65,90)
TITLE 59 87  #vss
MODEL 0
PROP                                                                                                                                    
REC(55,80,0,0,b)
VIS 0
PIN(60,80,0.000,0.000)vss
LIG(60,80,60,85)
LIG(55,85,65,85)
LIG(55,88,57,85)
LIG(57,88,59,85)
LIG(59,88,61,85)
LIG(61,88,63,85)
FSYM
SYM  #vdd
BB(55,-10,65,0)
TITLE 58 -4  #vdd
MODEL 1
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(60,0,0.000,0.000)vdd
LIG(60,0,60,-5)
LIG(60,-5,55,-5)
LIG(55,-5,60,-10)
LIG(60,-10,65,-5)
LIG(65,-5,60,-5)
FSYM
SYM  #light1
BB(93,21,99,35)
TITLE 95 21  #light
MODEL 49
PROP                                                                                                                                    
REC(94,30,4,4,r)
VIS 1
PIN(95,20,0.000,0.000)out1
LIG(98,29,98,34)
LIG(98,34,97,35)
LIG(94,34,94,29)
LIG(97,24,97,27)
LIG(96,24,99,24)
LIG(96,22,98,24)
LIG(97,22,99,24)
LIG(93,27,99,27)
LIG(95,27,95,20)
LIG(93,29,93,27)
LIG(99,29,93,29)
LIG(99,27,99,29)
LIG(95,35,94,34)
LIG(97,35,95,35)
FSYM
CNC(60 20)
CNC(60 20)
LIG(50,0,70,0)
LIG(50,20,60,20)
LIG(60,30,60,20)
LIG(60,20,95,20)
LIG(60,50,60,60)
LIG(65,10,95,10)
LIG(40,40,35,40)
LIG(35,40,35,10)
LIG(35,10,30,10)
LIG(40,70,65,70)
LIG(65,70,65,10)
FFIG C:\Users\DCL\Desktop\VLSI Design\example.sch
