DSCH 2.7f
VERSION 7/2/2023 9:43:25 AM
BB(46,-25,194,75)
SYM  #nmos
BB(65,15,85,35)
TITLE 80 20  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(66,20,19,15,r)
VIS 2
PIN(85,35,0.000,0.000)s
PIN(65,25,0.000,0.000)g
PIN(85,15,0.030,0.280)d
LIG(75,25,65,25)
LIG(75,31,75,19)
LIG(77,31,77,19)
LIG(85,19,77,19)
LIG(85,15,85,19)
LIG(85,31,77,31)
LIG(85,35,85,31)
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
PIN(85,45,0.030,0.070)d
LIG(75,55,65,55)
LIG(75,61,75,49)
LIG(77,61,77,49)
LIG(85,49,77,49)
LIG(85,45,85,49)
LIG(85,61,77,61)
LIG(85,65,85,61)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #pmos
BB(60,-15,80,5)
TITLE 75 -10  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(61,-10,19,15,r)
VIS 2
PIN(80,-15,0.000,0.000)s
PIN(60,-5,0.000,0.000)g
PIN(80,5,0.030,0.280)d
LIG(60,-5,66,-5)
LIG(68,-5,68,-5)
LIG(70,1,70,-11)
LIG(72,1,72,-11)
LIG(80,-11,72,-11)
LIG(80,-15,80,-11)
LIG(80,1,72,1)
LIG(80,5,80,1)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #pmos
BB(95,-15,115,5)
TITLE 100 -10  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(95,-10,19,15,r)
VIS 2
PIN(95,-15,0.000,0.000)s
PIN(115,-5,0.000,0.000)g
PIN(95,5,0.030,0.280)d
LIG(115,-5,109,-5)
LIG(107,-5,107,-5)
LIG(105,1,105,-11)
LIG(103,1,103,-11)
LIG(95,-11,103,-11)
LIG(95,-15,95,-11)
LIG(95,1,103,1)
LIG(95,5,95,1)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #vss
BB(80,67,90,75)
TITLE 84 72  #vss
MODEL 0
PROP                                                                                                                                    
REC(80,65,0,0,b)
VIS 0
PIN(85,65,0.000,0.000)vss
LIG(85,65,85,70)
LIG(80,70,90,70)
LIG(80,73,82,70)
LIG(82,73,84,70)
LIG(84,73,86,70)
LIG(86,73,88,70)
FSYM
SYM  #vdd
BB(85,-25,95,-15)
TITLE 88 -19  #vdd
MODEL 1
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(90,-15,0.000,0.000)vdd
LIG(90,-15,90,-20)
LIG(90,-20,85,-20)
LIG(85,-20,90,-25)
LIG(90,-25,95,-20)
LIG(95,-20,90,-20)
FSYM
SYM  #light2
BB(188,20,194,34)
TITLE 190 34  #light
MODEL 49
PROP                                                                                                                                   
REC(189,21,4,4,r)
VIS 1
PIN(190,35,0.000,0.000)out2
LIG(193,26,193,21)
LIG(193,21,192,20)
LIG(189,21,189,26)
LIG(192,31,192,28)
LIG(191,31,194,31)
LIG(191,33,193,31)
LIG(192,33,194,31)
LIG(188,28,194,28)
LIG(190,28,190,35)
LIG(188,26,188,28)
LIG(194,26,188,26)
LIG(194,28,194,26)
LIG(190,20,189,21)
LIG(192,20,190,20)
FSYM
SYM  #button1
BB(46,-9,55,-1)
TITLE 50 -5  #button
MODEL 59
PROP                                                                                                                                   
REC(47,-8,6,6,r)
VIS 1
PIN(55,-5,0.000,0.000)in1
LIG(54,-5,55,-5)
LIG(46,-1,46,-9)
LIG(54,-1,46,-1)
LIG(54,-9,54,-1)
LIG(46,-9,54,-9)
LIG(47,-2,47,-8)
LIG(53,-2,47,-2)
LIG(53,-8,53,-2)
LIG(47,-8,53,-8)
FSYM
SYM  #button2
BB(125,-9,134,-1)
TITLE 130 -5  #button
MODEL 59
PROP                                                                                                                                   
REC(127,-8,6,6,r)
VIS 1
PIN(125,-5,0.000,0.000)in2
LIG(126,-5,125,-5)
LIG(134,-1,134,-9)
LIG(126,-1,134,-1)
LIG(126,-9,126,-1)
LIG(134,-9,126,-9)
LIG(133,-2,133,-8)
LIG(127,-2,133,-2)
LIG(127,-8,127,-2)
LIG(133,-8,127,-8)
FSYM
SYM  #pmos
BB(140,10,160,30)
TITLE 155 15  #pmos
MODEL 902
PROP   2.0u 0.12u MP                                                                                                                              
REC(141,15,19,15,r)
VIS 2
PIN(160,10,0.000,0.000)s
PIN(140,20,0.000,0.000)g
PIN(160,30,0.030,0.140)d
LIG(140,20,146,20)
LIG(148,20,148,20)
LIG(150,26,150,14)
LIG(152,26,152,14)
LIG(160,14,152,14)
LIG(160,10,160,14)
LIG(160,26,152,26)
LIG(160,30,160,26)
VLG  pmos pmos(drain,source,gate);
FSYM
SYM  #nmos
BB(140,30,160,50)
TITLE 155 35  #nmos
MODEL 901
PROP   1.0u 0.12u MN                                                                                                                              
REC(141,35,19,15,r)
VIS 2
PIN(160,50,0.000,0.000)s
PIN(140,40,0.000,0.000)g
PIN(160,30,0.030,0.140)d
LIG(150,40,140,40)
LIG(150,46,150,34)
LIG(152,46,152,34)
LIG(160,34,152,34)
LIG(160,30,160,34)
LIG(160,46,152,46)
LIG(160,50,160,46)
VLG  nmos nmos(drain,source,gate);
FSYM
SYM  #vdd
BB(155,0,165,10)
TITLE 158 6  #vdd
MODEL 1
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(160,10,0.000,0.000)vdd
LIG(160,10,160,5)
LIG(160,5,155,5)
LIG(155,5,160,0)
LIG(160,0,165,5)
LIG(165,5,160,5)
FSYM
SYM  #vss
BB(155,52,165,60)
TITLE 159 57  #vss
MODEL 0
PROP                                                                                                                                    
REC(155,50,0,0,b)
VIS 0
PIN(160,50,0.000,0.000)vss
LIG(160,50,160,55)
LIG(155,55,165,55)
LIG(155,58,157,55)
LIG(157,58,159,55)
LIG(159,58,161,55)
LIG(161,58,163,55)
FSYM
CNC(85 5)
CNC(85 10)
CNC(140 30)
LIG(80,5,85,5)
LIG(80,-15,95,-15)
LIG(85,35,85,45)
LIG(85,5,85,10)
LIG(85,5,95,5)
LIG(115,-5,125,-5)
LIG(65,25,60,25)
LIG(60,25,60,-5)
LIG(55,-5,60,-5)
LIG(140,20,140,30)
LIG(85,10,125,10)
LIG(85,10,85,15)
LIG(125,10,125,30)
LIG(125,30,140,30)
LIG(140,30,140,40)
LIG(190,35,175,35)
LIG(175,35,175,30)
LIG(175,30,160,30)
LIG(65,55,65,40)
LIG(65,40,115,40)
LIG(115,40,115,-5)
FFIG C:\Users\DCL\Desktop\VLSI Design\and.sch
