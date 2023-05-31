LDmicro0.1
MICRO=Microchip PIC16F877 40-PDIP
CYCLE=10000
CRYSTAL=4000000
BAUD=2400
COMPILED=C:\Users\DCL\Desktop\PLC\first ladder.hex

IO LIST
    XA at 2
    XB at 3
    XC at 4
    Yx at 33
END

PROGRAM
RUNG
    CONTACTS XA 0
    CONTACTS XB 0
    CONTACTS XC 0
    COIL Yx 0 0 0
END
