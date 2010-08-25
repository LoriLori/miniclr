/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Wed, Apr 08, 2009                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :SH7011                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  




//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                

//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP

// 2 Reserved

// 3 Reserved

// 4 Illegal code
#pragma interrupt INT_Illegal_code
extern void INT_Illegal_code(void);

// 5 Reserved

// 6 Illegal slot
#pragma interrupt INT_Illegal_slot
extern void INT_Illegal_slot(void);

// 7 Reserved

// 8 Reserved

// 9 CPU Address error
#pragma interrupt INT_CPU_Address
extern void INT_CPU_Address(void);

// 10 Reserved

// 11 NMI
#pragma interrupt INT_NMI
extern void INT_NMI(void);

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
#pragma interrupt INT_TRAPA32
extern void INT_TRAPA32(void);

// 33 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA33
extern void INT_TRAPA33(void);

// 34 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA34
extern void INT_TRAPA34(void);

// 35 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA35
extern void INT_TRAPA35(void);

// 36 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA36
extern void INT_TRAPA36(void);

// 37 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA37
extern void INT_TRAPA37(void);

// 38 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA38
extern void INT_TRAPA38(void);

// 39 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA39
extern void INT_TRAPA39(void);

// 40 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA40
extern void INT_TRAPA40(void);

// 41 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA41
extern void INT_TRAPA41(void);

// 42 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA42
extern void INT_TRAPA42(void);

// 43 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA43
extern void INT_TRAPA43(void);

// 44 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA44
extern void INT_TRAPA44(void);

// 45 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA45
extern void INT_TRAPA45(void);

// 46 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA46
extern void INT_TRAPA46(void);

// 47 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA47
extern void INT_TRAPA47(void);

// 48 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA48
extern void INT_TRAPA48(void);

// 49 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA49
extern void INT_TRAPA49(void);

// 50 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA50
extern void INT_TRAPA50(void);

// 51 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA51
extern void INT_TRAPA51(void);

// 52 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA52
extern void INT_TRAPA52(void);

// 53 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA53
extern void INT_TRAPA53(void);

// 54 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA54
extern void INT_TRAPA54(void);

// 55 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA55
extern void INT_TRAPA55(void);

// 56 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA56
extern void INT_TRAPA56(void);

// 57 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA57
extern void INT_TRAPA57(void);

// 58 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA58
extern void INT_TRAPA58(void);

// 59 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA59
extern void INT_TRAPA59(void);

// 60 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA60
extern void INT_TRAPA60(void);

// 61 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA61
extern void INT_TRAPA61(void);

// 62 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA62
extern void INT_TRAPA62(void);

// 63 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA63
extern void INT_TRAPA63(void);

// 64 Interrupt IRQ0
#pragma interrupt INT_IRQ0
extern void INT_IRQ0(void);

// 65 Interrupt IRQ1
#pragma interrupt INT_IRQ1
extern void INT_IRQ1(void);

// 66 Interrupt IRQ2
#pragma interrupt INT_IRQ2
extern void INT_IRQ2(void);

// 67 Interrupt IRQ3
#pragma interrupt INT_IRQ3
extern void INT_IRQ3(void);

// 68 Interrupt IRQ4
#pragma interrupt INT_IRQ4
extern void INT_IRQ4(void);

// 69 Interrupt IRQ5
#pragma interrupt INT_IRQ5
extern void INT_IRQ5(void);

// 70 Interrupt IRQ6
#pragma interrupt INT_IRQ6
extern void INT_IRQ6(void);

// 71 Interrupt IRQ7
#pragma interrupt INT_IRQ7
extern void INT_IRQ7(void);

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
#pragma interrupt INT_MTU0_TGI0A
extern void INT_MTU0_TGI0A(void);

// 89 MTU0 TGI0B
#pragma interrupt INT_MTU0_TGI0B
extern void INT_MTU0_TGI0B(void);

// 90 MTU0 TGI0C
#pragma interrupt INT_MTU0_TGI0C
extern void INT_MTU0_TGI0C(void);

// 91 MTU0 TGI0D
#pragma interrupt INT_MTU0_TGI0D
extern void INT_MTU0_TGI0D(void);

// 92 MTU0 TGI0V
#pragma interrupt INT_MTU0_TGI0V
extern void INT_MTU0_TGI0V(void);

// 93 Reserved

// 94 Reserved

// 95 Reserved

// 96 MTU1 TGI1A
#pragma interrupt INT_MTU1_TGI1A
extern void INT_MTU1_TGI1A(void);

// 97 MTU1 TGI1B
#pragma interrupt INT_MTU1_TGI1B
extern void INT_MTU1_TGI1B(void);

// 98 Reserved

// 99 Reserved

// 100 MTU1 TGI1V
#pragma interrupt INT_MTU1_TGI1V
extern void INT_MTU1_TGI1V(void);

// 101 Reserved

// 102 Reserved

// 103 Reserved

// 104 MTU2 TGI2A
#pragma interrupt INT_MTU2_TGI2A
extern void INT_MTU2_TGI2A(void);

// 105 MTU2 TGI2B
#pragma interrupt INT_MTU2_TGI2B
extern void INT_MTU2_TGI2B(void);

// 106 Reserved

// 107 Reserved

// 108 MTU2 TGI2V
#pragma interrupt INT_MTU2_TGI21V
extern void INT_MTU2_TGI21V(void);

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
#pragma interrupt INT_SCI_ERI
extern void INT_SCI_ERI(void);

// 133 SCI RXI
#pragma interrupt INT_SCI_RXI
extern void INT_SCI_RXI(void);

// 134 SCI TXI
#pragma interrupt INT_SCI_TXI
extern void INT_SCI_TXI(void);

// 135 SCI TEI
#pragma interrupt INT_SCI_TEI
extern void INT_SCI_TEI(void);

// 136 Reserved

// 137 Reserved

// 138 A/D ADI
#pragma interrupt INT_ADI
extern void INT_ADI(void);

// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 CMT0 CMI0
#pragma interrupt INT_CMT0_CMI0
extern void INT_CMT0_CMI0(void);

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 CMT1 CMI1
#pragma interrupt INT_CMT1_CMI1
extern void INT_CMT1_CMI1(void);

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 TIM1 ITI
#pragma interrupt INT_TIM1_ITI
extern void INT_TIM1_ITI(void);

// 153 TIM2 CMI
#pragma interrupt INT_TIM2_CMI
extern void INT_TIM2_CMI(void);

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
#pragma interrupt Dummy
extern void Dummy(void);
