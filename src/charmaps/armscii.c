#include "charcode.h"
struct encoding_table_entry armscii_table [] = {
	{0x00, 0x00, 0x0028, 0x0028},
	{0x00, 0x00, 0x0029, 0x0029},
	{0x00, 0x00, 0x002C, 0x002C},
	{0x00, 0x00, 0x002D, 0x002D},
	{0x00, 0x00, 0x002E, 0x002E},
	{0x00, 0x00, 0x0080, 0x0080},
	{0x00, 0x00, 0x0081, 0x0081},
	{0x00, 0x00, 0x0082, 0x0082},
	{0x00, 0x00, 0x0083, 0x0083},
	{0x00, 0x00, 0x0084, 0x0084},
	{0x00, 0x00, 0x0085, 0x0085},
	{0x00, 0x00, 0x0086, 0x0086},
	{0x00, 0x00, 0x0087, 0x0087},
	{0x00, 0x00, 0x0088, 0x0088},
	{0x00, 0x00, 0x0089, 0x0089},
	{0x00, 0x00, 0x008A, 0x008A},
	{0x00, 0x00, 0x008B, 0x008B},
	{0x00, 0x00, 0x008C, 0x008C},
	{0x00, 0x00, 0x008D, 0x008D},
	{0x00, 0x00, 0x008E, 0x008E},
	{0x00, 0x00, 0x008F, 0x008F},
	{0x00, 0x00, 0x0090, 0x0090},
	{0x00, 0x00, 0x0091, 0x0091},
	{0x00, 0x00, 0x0092, 0x0092},
	{0x00, 0x00, 0x0093, 0x0093},
	{0x00, 0x00, 0x0094, 0x0094},
	{0x00, 0x00, 0x0095, 0x0095},
	{0x00, 0x00, 0x0096, 0x0096},
	{0x00, 0x00, 0x0097, 0x0097},
	{0x00, 0x00, 0x0098, 0x0098},
	{0x00, 0x00, 0x0099, 0x0099},
	{0x00, 0x00, 0x009A, 0x009A},
	{0x00, 0x00, 0x009B, 0x009B},
	{0x00, 0x00, 0x009C, 0x009C},
	{0x00, 0x00, 0x009D, 0x009D},
	{0x00, 0x00, 0x009E, 0x009E},
	{0x00, 0x00, 0x009F, 0x009F},
	{0x00, 0x00, 0x00A0, 0x00A0},
	{0x00, 0x00, 0x00A2, 0x0587},
	{0x00, 0x00, 0x00A3, 0x0589},
	{0x00, 0x00, 0x00A4, 0x0029},
	{0x00, 0x00, 0x00A5, 0x0028},
	{0x00, 0x00, 0x00A6, 0x00BB},
	{0x00, 0x00, 0x00A7, 0x00AB},
	{0x00, 0x00, 0x00A8, 0x2014},
	{0x00, 0x00, 0x00A9, 0x002E},
	{0x00, 0x00, 0x00AA, 0x055D},
	{0x00, 0x00, 0x00AB, 0x002C},
	{0x00, 0x00, 0x00AC, 0x002D},
	{0x00, 0x00, 0x00AD, 0x058A},
	{0x00, 0x00, 0x00AE, 0x2026},
	{0x00, 0x00, 0x00AF, 0x055C},
	{0x00, 0x00, 0x00B0, 0x055B},
	{0x00, 0x00, 0x00B1, 0x055E},
	{0x00, 0x00, 0x00B2, 0x0531},
	{0x00, 0x00, 0x00B3, 0x0561},
	{0x00, 0x00, 0x00B4, 0x0532},
	{0x00, 0x00, 0x00B5, 0x0562},
	{0x00, 0x00, 0x00B6, 0x0533},
	{0x00, 0x00, 0x00B7, 0x0563},
	{0x00, 0x00, 0x00B8, 0x0534},
	{0x00, 0x00, 0x00B9, 0x0564},
	{0x00, 0x00, 0x00BA, 0x0535},
	{0x00, 0x00, 0x00BB, 0x0565},
	{0x00, 0x00, 0x00BC, 0x0536},
	{0x00, 0x00, 0x00BD, 0x0566},
	{0x00, 0x00, 0x00BE, 0x0537},
	{0x00, 0x00, 0x00BF, 0x0567},
	{0x00, 0x00, 0x00C0, 0x0538},
	{0x00, 0x00, 0x00C1, 0x0568},
	{0x00, 0x00, 0x00C2, 0x0539},
	{0x00, 0x00, 0x00C3, 0x0569},
	{0x00, 0x00, 0x00C4, 0x053A},
	{0x00, 0x00, 0x00C5, 0x056A},
	{0x00, 0x00, 0x00C6, 0x053B},
	{0x00, 0x00, 0x00C7, 0x056B},
	{0x00, 0x00, 0x00C8, 0x053C},
	{0x00, 0x00, 0x00C9, 0x056C},
	{0x00, 0x00, 0x00CA, 0x053D},
	{0x00, 0x00, 0x00CB, 0x056D},
	{0x00, 0x00, 0x00CC, 0x053E},
	{0x00, 0x00, 0x00CD, 0x056E},
	{0x00, 0x00, 0x00CE, 0x053F},
	{0x00, 0x00, 0x00CF, 0x056F},
	{0x00, 0x00, 0x00D0, 0x0540},
	{0x00, 0x00, 0x00D1, 0x0570},
	{0x00, 0x00, 0x00D2, 0x0541},
	{0x00, 0x00, 0x00D3, 0x0571},
	{0x00, 0x00, 0x00D4, 0x0542},
	{0x00, 0x00, 0x00D5, 0x0572},
	{0x00, 0x00, 0x00D6, 0x0543},
	{0x00, 0x00, 0x00D7, 0x0573},
	{0x00, 0x00, 0x00D8, 0x0544},
	{0x00, 0x00, 0x00D9, 0x0574},
	{0x00, 0x00, 0x00DA, 0x0545},
	{0x00, 0x00, 0x00DB, 0x0575},
	{0x00, 0x00, 0x00DC, 0x0546},
	{0x00, 0x00, 0x00DD, 0x0576},
	{0x00, 0x00, 0x00DE, 0x0547},
	{0x00, 0x00, 0x00DF, 0x0577},
	{0x00, 0x00, 0x00E0, 0x0548},
	{0x00, 0x00, 0x00E1, 0x0578},
	{0x00, 0x00, 0x00E2, 0x0549},
	{0x00, 0x00, 0x00E3, 0x0579},
	{0x00, 0x00, 0x00E4, 0x054A},
	{0x00, 0x00, 0x00E5, 0x057A},
	{0x00, 0x00, 0x00E6, 0x054B},
	{0x00, 0x00, 0x00E7, 0x057B},
	{0x00, 0x00, 0x00E8, 0x054C},
	{0x00, 0x00, 0x00E9, 0x057C},
	{0x00, 0x00, 0x00EA, 0x054D},
	{0x00, 0x00, 0x00EB, 0x057D},
	{0x00, 0x00, 0x00EC, 0x054E},
	{0x00, 0x00, 0x00ED, 0x057E},
	{0x00, 0x00, 0x00EE, 0x054F},
	{0x00, 0x00, 0x00EF, 0x057F},
	{0x00, 0x00, 0x00F0, 0x0550},
	{0x00, 0x00, 0x00F1, 0x0580},
	{0x00, 0x00, 0x00F2, 0x0551},
	{0x00, 0x00, 0x00F3, 0x0581},
	{0x00, 0x00, 0x00F4, 0x0552},
	{0x00, 0x00, 0x00F5, 0x0582},
	{0x00, 0x00, 0x00F6, 0x0553},
	{0x00, 0x00, 0x00F7, 0x0583},
	{0x00, 0x00, 0x00F8, 0x0554},
	{0x00, 0x00, 0x00F9, 0x0584},
	{0x00, 0x00, 0x00FA, 0x0555},
	{0x00, 0x00, 0x00FB, 0x0585},
	{0x00, 0x00, 0x00FC, 0x0556},
	{0x00, 0x00, 0x00FD, 0x0586},
	{0x00, 0x00, 0x00FE, 0x055A},
};
unsigned int armscii_table_len = arrlen (armscii_table);
