DSCH 2.7f
VERSION 7/2/2023 10:36:54 AM
BB(-19,-20,134,80)
SYM  #vdd
BB(85,-20,95,-10)
TITLE 88 -14  #vdd
MODEL 1
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(90,-10,0.000,0.000)vdd
LIG(90,-10,90,-15)
LIG(90,-15,85,-15)
LIG(85,-15,90,-20)
LIG(90,-20,95,-15)
LIG(95,-15,90,-15)
FSYM
SYM  #button1
BB(-19,1,-10,9)
TITLE -15 5  #button
MODEL 59
PROP                                                                                                                                   
REC(-18,2,6,6,r)
VIS 1
PIN(-10,5,0.000,0.000)in1
LIG(-11,5,-10,5)
LIG(-19,9,-19,1)
LIG(-11,9,-19,9)
LIG(-11,1,-11,9)
LIG(-19,1,-11,1)
LIG(-18,8,-18,2)
LIG(-12,8,-18,8)
LIG(-12,2,-12,8)
LIG(-18,2,-12,2)
FSYM
SYM  #light2
BB(128,25,134,39)
TITLE 130 39  #light
MODEL 49
PROP                                                                                                                                   
REC(129,26,4,4,r)
VIS 1
PIN(130,40,0.000,0.000)out2
LIG(133,31,133,26)
LIG(133,26,132,25)
LIG(129,26,129,31)
LIG(132,36,132,33)
LIG(131,36,134,36)
LIG(131,38,133,36)
LIG(132,38,134,36)
LIG(128,33,134,33)
LIG(130,33,130,40)
LIG(128,31,128,33)
LIG(134,31,128,31)
LIG(134,33,134,31)
LIG(130,25,129,26)
LIG(132,25,130,25)
FSYM
SYM  #button2
BB(-19,26,-10,34)
TITLE -15 30  #button
MODEL 59
PROP                                                                                                                                   
REC(-18,27,6,6,r)
VIS 1
PIN(-10,30,0.000,0.000)in2
LIG(-11,30,-10,30)
LIG(-19,34,-19,26)
LIG(-11,34,-19,34)
LIG(-11,26,-11,34)
LIG(-19,26,-11,26)
LIG(-18,33,-18,27)
LIG(-12,33,-18,33)
LIG(-12,27,-12,33)
LIG(-18,27,-12,27)
FSYM
SYM  #pmos
BB(70,-10,90,10)
TITLE 85 -5  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(71,-5,19,15,r)
VIS 2
PIN(90,-10,0.000,0.000)s
PIN(70,0,0.000,0.000)g
PIN(90,10,0.030,0.070)d
LIG(70,0,76,0)
LIG(78,0,78,0)
LIG(80,6,80,-6)
LIG(82,6,82,-6)
LIG(90,-6,82,-6)
LIG(90,-10,90,-6)
LIG(90,6,82,6)
LIG(90,10,90,6)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #pmos
BB(70,10,90,30)
TITLE 85 15  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(71,15,19,15,r)
VIS 2
PIN(90,10,0.000,0.000)s
PIN(70,20,0.000,0.000)g
PIN(90,30,0.030,0.210)d
LIG(70,20,76,20)
LIG(78,20,78,20)
LIG(80,26,80,14)
LIG(82,26,82,14)
LIG(90,14,82,14)
LIG(90,10,90,14)
LIG(90,26,82,26)
LIG(90,30,90,26)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #vss
BB(85,67,95,75)
TITLE 89 72  #vss
MODEL 0
PROP                                                                                                                                    
REC(85,65,0,0,b)
VIS 0
PIN(90,65,0.000,0.000)vss
LIG(90,65,90,70)
LIG(85,70,95,70)
LIG(85,73,87,70)
LIG(87,73,89,70)
LIG(89,73,91,70)
LIG(91,73,93,70)
FSYM
SYM  #nmos
BB(100,45,120,65)
TITLE 105 50  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(100,50,19,15,r)
VIS 2
PIN(100,65,0.000,0.000)s
PIN(120,55,0.000,0.000)g
PIN(100,45,0.030,0.210)d
LIG(110,55,120,55)
LIG(110,61,110,49)
LIG(108,61,108,49)
LIG(100,49,108,49)
LIG(100,45,100,49)
LIG(100,61,108,61)
LIG(100,65,100,61)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #nmos
BB(65,45,85,65)
TITLE 80 50  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(66,50,19,15,r)
VIS 2
PIN(85,65,0.000,0.000)s
PIN(65,55,0.000,0.000)g
PIN(85,45,0.030,0.210)d
LIG(75,55,65,55)
LIG(75,61,75,49)
LIG(77,61,77,49)
LIG(85,49,77,49)
LIG(85,45,85,49)
LIG(85,61,77,61)
LIG(85,65,85,61)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #inv
BB(0,20,35,40)
TITLE 15 30  #~
MODEL 101
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(0,30,0.000,0.000)in
PIN(35,30,0.030,0.140)out
LIG(0,30,10,30)
LIG(10,20,10,40)
LIG(10,20,25,30)
LIG(10,40,25,30)
LIG(27,30,27,30)
LIG(29,30,35,30)
VLG  not not1(out,in);
FSYM
SYM  #inv
BB(-5,-5,30,15)
TITLE 10 5  #~
MODEL 101
PROP                                                                                                                                   
REC(-5,-10,0,0, )
VIS 0
PIN(-5,5,0.000,0.000)in
PIN(30,5,0.030,0.140)out
LIG(-5,5,5,5)
LIG(5,-5,5,15)
LIG(5,-5,20,5)
LIG(5,15,20,5)
LIG(22,5,22,5)
LIG(24,5,30,5)
VLG  not not1(out,in);
FSYM
CNC(90 45)
CNC(65 0)
CNC(55 30)
CNC(90 40)
LIG(90,30,90,40)
LIG(90,45,100,45)
LIG(85,45,90,45)
LIG(85,65,100,65)
LIG(70,0,65,0)
LIG(30,0,30,5)
LIG(90,40,90,45)
LIG(70,20,55,20)
LIG(65,55,65,0)
LIG(65,0,30,0)
LIG(120,55,120,80)
LIG(120,80,55,80)
LIG(55,80,55,30)
LIG(-10,30,0,30)
LIG(130,40,90,40)
LIG(35,30,55,30)
LIG(55,30,55,20)
LIG(-5,5,-10,5)
FFIG C:\Users\DCL\Desktop\VLSI Design\AND\AND.sch
