/***********************************************************************/
/*                                                                     */
/*  FILE        :intprg.c                                              */
/*  DATE        :Wed, Apr 08, 2009                                     */
/*  DESCRIPTION :Interrupt Program                                     */
/*  CPU TYPE    :SH7011                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  


#include <machine.h>
#include "vect.h"
#pragma section IntPRG
// 2 Reserved

// 3 Reserved

// 4 Illegal code
void INT_Illegal_code(void){/* sleep(); */}
// 5 Reserved

// 6 Illegal slot
void INT_Illegal_slot(void){/* sleep(); */}
// 7 Reserved

// 8 Reserved

// 9 CPU Address error
void INT_CPU_Address(void){/* sleep(); */}
// 10 Reserved

// 11 NMI
void INT_NMI(void){/* sleep(); */}
// 12 Reserved

// 13 Reserved

// 14 Reserved

// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
void INT_TRAPA32(void){/* sleep(); */}
// 33 TRAPA (User Vecter)
void INT_TRAPA33(void){/* sleep(); */}
// 34 TRAPA (User Vecter)
void INT_TRAPA34(void){/* sleep(); */}
// 35 TRAPA (User Vecter)
void INT_TRAPA35(void){/* sleep(); */}
// 36 TRAPA (User Vecter)
void INT_TRAPA36(void){/* sleep(); */}
// 37 TRAPA (User Vecter)
void INT_TRAPA37(void){/* sleep(); */}
// 38 TRAPA (User Vecter)
void INT_TRAPA38(void){/* sleep(); */}
// 39 TRAPA (User Vecter)
void INT_TRAPA39(void){/* sleep(); */}
// 40 TRAPA (User Vecter)
void INT_TRAPA40(void){/* sleep(); */}
// 41 TRAPA (User Vecter)
void INT_TRAPA41(void){/* sleep(); */}
// 42 TRAPA (User Vecter)
void INT_TRAPA42(void){/* sleep(); */}
// 43 TRAPA (User Vecter)
void INT_TRAPA43(void){/* sleep(); */}
// 44 TRAPA (User Vecter)
void INT_TRAPA44(void){/* sleep(); */}
// 45 TRAPA (User Vecter)
void INT_TRAPA45(void){/* sleep(); */}
// 46 TRAPA (User Vecter)
void INT_TRAPA46(void){/* sleep(); */}
// 47 TRAPA (User Vecter)
void INT_TRAPA47(void){/* sleep(); */}
// 48 TRAPA (User Vecter)
void INT_TRAPA48(void){/* sleep(); */}
// 49 TRAPA (User Vecter)
void INT_TRAPA49(void){/* sleep(); */}
// 50 TRAPA (User Vecter)
void INT_TRAPA50(void){/* sleep(); */}
// 51 TRAPA (User Vecter)
void INT_TRAPA51(void){/* sleep(); */}
// 52 TRAPA (User Vecter)
void INT_TRAPA52(void){/* sleep(); */}
// 53 TRAPA (User Vecter)
void INT_TRAPA53(void){/* sleep(); */}
// 54 TRAPA (User Vecter)
void INT_TRAPA54(void){/* sleep(); */}
// 55 TRAPA (User Vecter)
void INT_TRAPA55(void){/* sleep(); */}
// 56 TRAPA (User Vecter)
void INT_TRAPA56(void){/* sleep(); */}
// 57 TRAPA (User Vecter)
void INT_TRAPA57(void){/* sleep(); */}
// 58 TRAPA (User Vecter)
void INT_TRAPA58(void){/* sleep(); */}
// 59 TRAPA (User Vecter)
void INT_TRAPA59(void){/* sleep(); */}
// 60 TRAPA (User Vecter)
void INT_TRAPA60(void){/* sleep(); */}
// 61 TRAPA (User Vecter)
void INT_TRAPA61(void){/* sleep(); */}
// 62 TRAPA (User Vecter)
void INT_TRAPA62(void){/* sleep(); */}
// 63 TRAPA (User Vecter)
void INT_TRAPA63(void){/* sleep(); */}
// 64 Interrupt IRQ0
void INT_IRQ0(void){/* sleep(); */}
// 65 Interrupt IRQ1
void INT_IRQ1(void){/* sleep(); */}
// 66 Interrupt IRQ2
void INT_IRQ2(void){/* sleep(); */}
// 67 Interrupt IRQ3
void INT_IRQ3(void){/* sleep(); */}
// 68 Interrupt IRQ4
void INT_IRQ4(void){/* sleep(); */}
// 69 Interrupt IRQ5
void INT_IRQ5(void){/* sleep(); */}
// 70 Interrupt IRQ6
void INT_IRQ6(void){/* sleep(); */}
// 71 Interrupt IRQ7
void INT_IRQ7(void){/* sleep(); */}
// 72 Reserved

// 73 Reserved

// 74 Reserved

// 75 Reserved

// 76 Reserved

// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 Reserved

// 81 Reserved

// 82 Reserved

// 83 Reserved

// 84 Reserved

// 85 Reserved

// 86 Reserved

// 87 Reserved

// 88 MTU0 TGI0A
void INT_MTU0_TGI0A(void){/* sleep(); */}
// 89 MTU0 TGI0B
void INT_MTU0_TGI0B(void){/* sleep(); */}
// 90 MTU0 TGI0C
void INT_MTU0_TGI0C(void){/* sleep(); */}
// 91 MTU0 TGI0D
void INT_MTU0_TGI0D(void){/* sleep(); */}
// 92 MTU0 TGI0V
void INT_MTU0_TGI0V(void){/* sleep(); */}
// 93 Reserved

// 94 Reserved

// 95 Reserved

// 96 MTU1 TGI1A
void INT_MTU1_TGI1A(void){/* sleep(); */}
// 97 MTU1 TGI1B
void INT_MTU1_TGI1B(void){/* sleep(); */}
// 98 Reserved

// 99 Reserved

// 100 MTU1 TGI1V
void INT_MTU1_TGI1V(void){/* sleep(); */}
// 101 Reserved

// 102 Reserved

// 103 Reserved

// 104 MTU2 TGI2A
void INT_MTU2_TGI2A(void){/* sleep(); */}
// 105 MTU2 TGI2B
void INT_MTU2_TGI2B(void){/* sleep(); */}
// 106 Reserved

// 107 Reserved

// 108 MTU2 TGI2V
void INT_MTU2_TGI21V(void){/* sleep(); */}
// 109 Reserved

// 110 Reserved

// 111 Reserved

// 112 Reserved

// 113 Reserved

// 114 Reserved

// 115 Reserved

// 116 Reserved

// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 Reserved

// 121 Reserved

// 122 Reserved

// 123 Reserved

// 124 Reserved

// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 Reserved

// 129 Reserved

// 130 Reserved

// 131 Reserved

// 132 SCI ERI
void INT_SCI_ERI(void){/* sleep(); */}
// 133 SCI RXI
void INT_SCI_RXI(void){/* sleep(); */}
// 134 SCI TXI
void INT_SCI_TXI(void){/* sleep(); */}
// 135 SCI TEI
void INT_SCI_TEI(void){/* sleep(); */}
// 136 Reserved

// 137 Reserved

// 136 A/D ADI
void INT_ADI(void){/* sleep(); */}
// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 CMT0 CMI0
void INT_CMT0_CMI0(void){/* sleep(); */}
// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 CMT1 CMI1
void INT_CMT1_CMI1(void){/* sleep(); */}
// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 TIM1 ITI
void INT_TIM1_ITI(void){/* sleep(); */}
// 153 TIM2 CMI
void INT_TIM2_CMI(void){/* sleep(); */}
// 154 Reserved

// 155 Reserved

// 156 Reserved

// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 Reserved

// 161 Reserved

// 162 Reserved

// 163 Reserved

// 164 Reserved

// 165 Reserved

// 166 Reserved

// 127 Reserved

// 168 Reserved

// 169 Reserved

// 170 Reserved

// 171 Reserved

// 172 Reserved

// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 Reserved

// 177 Reserved

// 178 Reserved

// 179 Reserved

// 180 Reserved

// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 Reserved

// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 Reserved

// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 Reserved

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 Reserved

// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 Reserved

// 201 Reserved

// 202 Reserved

// 203 Reserved

// 204 Reserved

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 Reserved

// 209 Reserved

// 210 Reserved

// 211 Reserved

// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 Reserved

// 217 Reserved

// 218 Reserved

// 219 Reserved

// 220 Reserved

// 221 Reserved

// 222 Reserved

// 223 Reserved

// 224 Reserved

// 225 Reserved

// 226 Reserved

// 227 Reserved

// 228 Reserved

// 229 Reserved

// 230 Reserved

// 231 Reserved

// 232 Reserved

// 233 Reserved

// 234 Reserved

// 235 Reserved

// 236 Reserved

// 237 Reserved

// 238 Reserved

// 239 Reserved

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved


// Dummy
void Dummy(void){/* sleep(); */}
