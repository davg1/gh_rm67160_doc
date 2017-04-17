#ifndef __STC15W4K56S4_H__
#define __STC15W4K56S4_H__

	#include <8051.h>
	#include <compiler.h>

	#ifdef REG8051_H
	#undef REG8051_H
	#endif

	SFR(ACC, 0xE0);
	SFR(B,   0xF0);
	SFR(PSW, 0xD0);
		SBIT(CY,  0xd0, 7);
		SBIT(AC,  0xd0, 6);
		SBIT(F0,  0xd0, 5);
		SBIT(RS1, 0xd0, 4);
		SBIT(RS0, 0xd0, 3);
		SBIT(OV,  0xd0, 2);
		SBIT(P,   0xd0, 0);
	SFR(SP,  0x81);
	SFR(DPL, 0x82);
	SFR(DPH, 0x83);

	SFR(P0, 0x80);
		SBIT(P00, 0x80, 0);
		SBIT(P01, 0x80, 1);
		SBIT(P02, 0x80, 2);
		SBIT(P03, 0x80, 3);
		SBIT(P04, 0x80, 4);
		SBIT(P05, 0x80, 5);
		SBIT(P06, 0x80, 6);
		SBIT(P07, 0x80, 7);
	SFR(P1, 0x90);
		SBIT(P10, 0x90, 0);
		SBIT(P11, 0x90, 1);
		SBIT(P12, 0x90, 2);
		SBIT(P13, 0x90, 3);
		SBIT(P14, 0x90, 4);
		SBIT(P15, 0x90, 5);
		SBIT(P16, 0x90, 6);
		SBIT(P17, 0x90, 7);
	SFR(P2, 0xA0);
		SBIT(P20, 0xa0, 0);
		SBIT(P21, 0xa0, 1);
		SBIT(P22, 0xa0, 2);
		SBIT(P23, 0xa0, 3);
		SBIT(P24, 0xa0, 4);
		SBIT(P25, 0xa0, 5);
		SBIT(P26, 0xa0, 6);
		SBIT(P27, 0xa0, 7);
	SFR(P3, 0xB0);
		SBIT(P30, 0xb0, 0);
		SBIT(P31, 0xb0, 1);
		SBIT(P32, 0xb0, 2);
		SBIT(P33, 0xb0, 3);
		SBIT(P34, 0xb0, 4);
		SBIT(P35, 0xb0, 5);
		SBIT(P36, 0xb0, 6);
		SBIT(P37, 0xb0, 7);
	SFR(P4, 0xC0);
		SBIT(P40, 0xc0, 0);
		SBIT(P41, 0xc0, 1);
		SBIT(P42, 0xc0, 2);
		SBIT(P43, 0xc0, 3);
		SBIT(P44, 0xc0, 4);
		SBIT(P45, 0xc0, 5);
		SBIT(P46, 0xc0, 6);
		SBIT(P47, 0xc0, 7);
	SFR(P5, 0xC8);
		SBIT(P50, 0xc8, 0);
		SBIT(P51, 0xc8, 1);
		SBIT(P52, 0xc8, 2);
		SBIT(P53, 0xc8, 3);
		SBIT(P54, 0xc8, 4);
		SBIT(P55, 0xc8, 5);
		SBIT(P56, 0xc8, 6);
		SBIT(P57, 0xc8, 7);
	SFR(P6, 0xE8);
		SBIT(P60, 0xe8, 0);
		SBIT(P61, 0xe8, 1);
		SBIT(P62, 0xe8, 2);
		SBIT(P63, 0xe8, 3);
		SBIT(P64, 0xe8, 4);
		SBIT(P65, 0xe8, 5);
		SBIT(P66, 0xe8, 6);
		SBIT(P67, 0xe8, 7);
	SFR(P7, 0xF8);
		SBIT(P70, 0xf8, 0);
		SBIT(P71, 0xf8, 1);
		SBIT(P72, 0xf8, 2);
		SBIT(P73, 0xf8, 3);
		SBIT(P74, 0xf8, 4);
		SBIT(P75, 0xf8, 5);
		SBIT(P76, 0xf8, 6);
		SBIT(P77, 0xf8, 7);
	SFR(P0M0, 0x94);
	SFR(P0M1, 0x93);
	SFR(P1M0, 0x92);
	SFR(P1M1, 0x91);
	SFR(P2M0, 0x96);
	SFR(P2M1, 0x95);
	SFR(P3M0, 0xB2);
	SFR(P3M1, 0xB1);
	SFR(P4M0, 0xB4);
	SFR(P4M1, 0xB3);
	SFR(P5M0, 0xCA);
	SFR(P5M1, 0xC9);
	SFR(P6M0, 0xCC);
	SFR(P6M1, 0xCB);
	SFR(P7M0, 0xE2);
	SFR(P7M1, 0xE1);

	SFR(PCON, 0x87);
	SFR(AUXR, 0x8E);
	SFR(AUXR1, 0xA2);
	SFR(P_SW1, 0xA2);
	SFR(CLK_DIV, 0x97);
	SFR(BUS_SPEED, 0xA1);
	SFR(P1ASF, 0x9D);
	SFR(P_SW2, 0xBA);

	SFR(IE, 0xA8);
		SBIT(EA,   0xa8, 7);
		SBIT(ELVD, 0xa8, 6);
		SBIT(EADC, 0xa8, 5);
		SBIT(ES,   0xa8, 4);
		SBIT(ET1,  0xa8, 3);
		SBIT(EX1,  0xa8, 2);
		SBIT(ET0,  0xa8, 1);
		SBIT(EX0,  0xa8, 0);
	SFR(IP, 0xB8);
		SBIT(PPCA, 0xb8, 7);
		SBIT(PLVD, 0xb8, 6);
		SBIT(PADC, 0xb8, 5);
		SBIT(PS,   0xb8, 4);
		SBIT(PT1,  0xb8, 3);
		SBIT(PX1,  0xb8, 2);
		SBIT(PT0,  0xb8, 1);
		SBIT(PX0,  0xb8, 0);
	SFR(IE2, 0xAF);
	SFR(IP2, 0xB5);
	SFR(INT_CLKO, 0x8F);

	SFR(TCON, 0x88);
		SBIT(TF1, 0x88, 7);
		SBIT(TR1, 0x88, 6);
		SBIT(TF0, 0x88, 5);
		SBIT(TR0, 0x88, 4);
		SBIT(IE1, 0x88, 3);
		SBIT(IT1, 0x88, 2);
		SBIT(IE0, 0x88, 1);
		SBIT(IT0, 0x88, 0);
	SFR(TMOD, 0x89);
	SFR(TL0, 0x8A);
	SFR(TL1, 0x8B);
	SFR(TH0, 0x8C);
	SFR(TH1, 0x8D);
	SFR(T4T3M, 0xD1);
	SFR(T3T4M, 0xD1);
	SFR(T4H, 0xD2);
	SFR(T4L, 0xD3);
	SFR(T3H, 0xD4);
	SFR(T3L, 0xD5);
	SFR(T2H, 0xD6);
	SFR(T2L, 0xD7);
	SFR(WKTCL, 0xAA);
	SFR(WKTCH, 0xAB);
	SFR(WDT_CONTR, 0xC1);

	SFR(SCON, 0x98);
		SBIT(SM0, 0x98, 7);
		SBIT(SM1, 0x98, 6);
		SBIT(SM2, 0x98, 5);
		SBIT(REN, 0x98, 4);
		SBIT(TB8, 0x98, 3);
		SBIT(RB8, 0x98, 2);
		SBIT(TI, 0x98, 1);
		SBIT(RI, 0x98, 0);
	SFR(SBUF, 0x99);
	SFR(S2CON, 0x9A);
	SFR(S2BUF, 0x9B);
	SFR(S3CON, 0xAC);
	SFR(S3BUF, 0xAD);
	SFR(S4CON, 0x84);
	SFR(S4BUF, 0x85);
	SFR(SADDR, 0xA9);
	SFR(SADEN, 0xB9);

	SFR(ADC_CONTR, 0xBC);
	SFR(ADC_RES, 0xBD);
	SFR(ADC_RESL, 0xBE);

	SFR(SPSTAT, 0xCD);
	SFR(SPCTL, 0xCE);
	SFR(SPDAT, 0xCF);

	SFR(IAP_DATA, 0xC2);
	SFR(IAP_ADDRH, 0xC3);
	SFR(IAP_ADDRL, 0xC4);
	SFR(IAP_CMD, 0xC5);
	SFR(IAP_TRIG, 0xC6);
	SFR(IAP_CONTR, 0xC7);

	SFR(CCON, 0xD8);
		SBIT(CF, 0xd8, 7);
		SBIT(CR, 0xd8, 6);
		SBIT(CCF2, 0xd8, 2);
		SBIT(CCF1, 0xd8, 1);
		SBIT(CCF0, 0xd8, 0);
	SFR(CMOD, 0xD9);
	SFR(CL, 0xE9);
	SFR(CH, 0xF9);
	SFR(CCAPM0, 0xDA);
	SFR(CCAPM1, 0xDB);
	SFR(CCAPM2, 0xDC);
	SFR(CCAP0L, 0xEA);
	SFR(CCAP1L, 0xEB);
	SFR(CCAP2L, 0xEC);
	SFR(PCA_PWM0, 0xF2);
	SFR(PCA_PWM1, 0xF3);
	SFR(PCA_PWM2, 0xF4);
	SFR(CCAP0H, 0xFA);
	SFR(CCAP1H, 0xFB);
	SFR(CCAP2H, 0xFC);

	SFR(CMPCR1, 0xE6);
	SFR(CMPCR2, 0xE7);

	SFR(PWMCFG, 0xf1);
	SFR(PWMCR, 0xf5);
	SFR(PWMIF, 0xf6);
	SFR(PWMFDCR, 0xf7);

	#define PWMC        (*(unsigned int  volatile xdata *)0xfff0)
	#define PWMCH       (*(unsigned char volatile xdata *)0xfff0)
	#define PWMCL       (*(unsigned char volatile xdata *)0xfff1)
	#define PWMCKS      (*(unsigned char volatile xdata *)0xfff2)
	#define PWM2T1      (*(unsigned int  volatile xdata *)0xff00)
	#define PWM2T1H     (*(unsigned char volatile xdata *)0xff00)
	#define PWM2T1L     (*(unsigned char volatile xdata *)0xff01)
	#define PWM2T2      (*(unsigned int  volatile xdata *)0xff02)
	#define PWM2T2H     (*(unsigned char volatile xdata *)0xff02)
	#define PWM2T2L     (*(unsigned char volatile xdata *)0xff03)
	#define PWM2CR      (*(unsigned char volatile xdata *)0xff04)
	#define PWM3T1      (*(unsigned int  volatile xdata *)0xff10)
	#define PWM3T1H     (*(unsigned char volatile xdata *)0xff10)
	#define PWM3T1L     (*(unsigned char volatile xdata *)0xff11)
	#define PWM3T2      (*(unsigned int  volatile xdata *)0xff12)
	#define PWM3T2H     (*(unsigned char volatile xdata *)0xff12)
	#define PWM3T2L     (*(unsigned char volatile xdata *)0xff13)
	#define PWM3CR      (*(unsigned char volatile xdata *)0xff14)
	#define PWM4T1      (*(unsigned int  volatile xdata *)0xff20)
	#define PWM4T1H     (*(unsigned char volatile xdata *)0xff20)
	#define PWM4T1L     (*(unsigned char volatile xdata *)0xff21)
	#define PWM4T2      (*(unsigned int  volatile xdata *)0xff22)
	#define PWM4T2H     (*(unsigned char volatile xdata *)0xff22)
	#define PWM4T2L     (*(unsigned char volatile xdata *)0xff23)
	#define PWM4CR      (*(unsigned char volatile xdata *)0xff24)
	#define PWM5T1      (*(unsigned int  volatile xdata *)0xff30)
	#define PWM5T1H     (*(unsigned char volatile xdata *)0xff30)
	#define PWM5T1L     (*(unsigned char volatile xdata *)0xff31)
	#define PWM5T2      (*(unsigned int  volatile xdata *)0xff32)
	#define PWM5T2H     (*(unsigned char volatile xdata *)0xff32)
	#define PWM5T2L     (*(unsigned char volatile xdata *)0xff33)
	#define PWM5CR      (*(unsigned char volatile xdata *)0xff34)
	#define PWM6T1      (*(unsigned int  volatile xdata *)0xff40)
	#define PWM6T1H     (*(unsigned char volatile xdata *)0xff40)
	#define PWM6T1L     (*(unsigned char volatile xdata *)0xff41)
	#define PWM6T2      (*(unsigned int  volatile xdata *)0xff42)
	#define PWM6T2H     (*(unsigned char volatile xdata *)0xff42)
	#define PWM6T2L     (*(unsigned char volatile xdata *)0xff43)
	#define PWM6CR      (*(unsigned char volatile xdata *)0xff44)
	#define PWM7T1      (*(unsigned int  volatile xdata *)0xff50)        
	#define PWM7T1H     (*(unsigned char volatile xdata *)0xff50)        
	#define PWM7T1L     (*(unsigned char volatile xdata *)0xff51)
	#define PWM7T2      (*(unsigned int  volatile xdata *)0xff52)
	#define PWM7T2H     (*(unsigned char volatile xdata *)0xff52)
	#define PWM7T2L     (*(unsigned char volatile xdata *)0xff53)
	#define PWM7CR      (*(unsigned char volatile xdata *)0xff54)

#endif

