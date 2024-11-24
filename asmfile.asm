; Sescon, Hans Jared  C. - S16
; Ty, Darryl Johnson  T. - S16
section .data
    GRAYFLOATVALUE dd 255.0

section .text
bits 64
default rel
global imgCvtGrayInttoFloat

imgCvtGrayInttoFloat:
    ;write your code here
    CVTSI2SS XMM0, RCX
    
    MOVSS XMM1, [GRAYFLOATVALUE]    
    DIVSS XMM0, XMM1
    
    ret