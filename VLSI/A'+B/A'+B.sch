DSCH 2.7f
VERSION 7/2/2023 5:47:18 PM
BB(21,-5,154,107)
SYM  #pmos
BB(45,5,65,25)
TITLE 60 10  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(46,10,19,15,r)
VIS 2
PIN(65,5,0.000,0.000)s
PIN(45,15,0.000,0.000)g
PIN(65,25,0.030,0.210)d
LIG(45,15,51,15)
LIG(53,15,53,15)
LIG(55,21,55,9)
LIG(57,21,57,9)
LIG(65,9,57,9)
LIG(65,5,65,9)
LIG(65,21,57,21)
LIG(65,25,65,21)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #pmos
BB(80,5,100,25)
TITLE 85 10  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(80,10,19,15,r)
VIS 2
PIN(80,5,0.000,0.000)s
PIN(100,15,0.000,0.000)g
PIN(80,25,0.030,0.210)d
LIG(100,15,94,15)
LIG(92,15,92,15)
LIG(90,21,90,9)
LIG(88,21,88,9)
LIG(80,9,88,9)
LIG(80,5,80,9)
LIG(80,21,88,21)
LIG(80,25,80,21)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #nmos
BB(50,35,70,55)
TITLE 65 40  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(51,40,19,15,r)
VIS 2
PIN(70,55,0.000,0.000)s
PIN(50,45,0.000,0.000)g
PIN(70,35,0.030,0.210)d
LIG(60,45,50,45)
LIG(60,51,60,39)
LIG(62,51,62,39)
LIG(70,39,62,39)
LIG(70,35,70,39)
LIG(70,51,62,51)
LIG(70,55,70,51)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #inv
BB(110,5,145,25)
TITLE 130 15  #~
MODEL 101
PROP                                                                                                                                   
REC(260,-45,0,0, )
VIS 0
PIN(145,15,0.000,0.000)in
PIN(110,15,0.030,0.140)out
LIG(145,15,135,15)
LIG(135,5,135,25)
LIG(135,5,120,15)
LIG(135,25,120,15)
LIG(118,15,118,15)
LIG(116,15,110,15)
VLG  not not1(out,in);
FSYM
SYM  #nmos
BB(50,55,70,75)
TITLE 65 60  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(51,60,19,15,r)
VIS 2
PIN(70,75,0.000,0.000)s
PIN(50,65,0.000,0.000)g
PIN(70,55,0.030,0.070)d
LIG(60,65,50,65)
LIG(60,71,60,59)
LIG(62,71,62,59)
LIG(70,59,62,59)
LIG(70,55,70,59)
LIG(70,71,62,71)
LIG(70,75,70,71)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #vdd
BB(65,-5,75,5)
TITLE 68 1  #vdd
MODEL 1
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(70,5,0.000,0.000)vdd
LIG(70,5,70,0)
LIG(70,0,65,0)
LIG(65,0,70,-5)
LIG(70,-5,75,0)
LIG(75,0,70,0)
FSYM
SYM  #vss
BB(65,77,75,85)
TITLE 69 82  #vss
MODEL 0
PROP                                                                                                                                    
REC(65,75,0,0,b)
VIS 0
PIN(70,75,0.000,0.000)vss
LIG(70,75,70,80)
LIG(65,80,75,80)
LIG(65,83,67,80)
LIG(67,83,69,80)
LIG(69,83,71,80)
LIG(71,83,73,80)
FSYM
SYM  #light1
BB(108,20,114,34)
TITLE 110 34  #light
MODEL 49
PROP                                                                                                                                   
REC(109,21,4,4,r)
VIS 1
PIN(110,35,0.000,0.000)out1
LIG(113,26,113,21)
LIG(113,21,112,20)
LIG(109,21,109,26)
LIG(112,31,112,28)
LIG(111,31,114,31)
LIG(111,33,113,31)
LIG(112,33,114,31)
LIG(108,28,114,28)
LIG(110,28,110,35)
LIG(108,26,108,28)
LIG(114,26,108,26)
LIG(114,28,114,26)
LIG(110,20,109,21)
LIG(112,20,110,20)
FSYM
SYM  #button1
BB(21,11,30,19)
TITLE 25 15  #button
MODEL 59
PROP                                                                                                                                   
REC(22,12,6,6,r)
VIS 1
PIN(30,15,0.000,0.000)in1
LIG(29,15,30,15)
LIG(21,19,21,11)
LIG(29,19,21,19)
LIG(29,11,29,19)
LIG(21,11,29,11)
LIG(22,18,22,12)
LIG(28,18,22,18)
LIG(28,12,28,18)
LIG(22,12,28,12)
FSYM
SYM  #button2
BB(145,11,154,19)
TITLE 150 15  #button
MODEL 59
PROP                                                                                                                                   
REC(147,12,6,6,r)
VIS 1
PIN(145,15,0.000,0.000)in2
LIG(146,15,145,15)
LIG(154,19,154,11)
LIG(146,19,154,19)
LIG(146,11,146,19)
LIG(154,11,146,11)
LIG(153,18,153,12)
LIG(147,18,153,18)
LIG(147,12,147,18)
LIG(153,12,147,12)
FSYM
CNC(70 25)
LIG(65,25,70,25)
LIG(70,35,70,25)
LIG(70,25,80,25)
LIG(65,5,80,5)
LIG(110,35,70,35)
LIG(30,15,45,15)
LIG(100,15,110,15)
LIG(50,45,45,45)
LIG(45,45,45,15)
LIG(50,65,50,90)
LIG(50,90,100,90)
LIG(100,15,100,90)
TEXT 72 97  #F= A'+B
FFIG C:\Users\DCL\Desktop\VLSI Design\A'+B.sch
