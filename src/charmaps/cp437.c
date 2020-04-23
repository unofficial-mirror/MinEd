#include "charcode.h"
struct encoding_table_entry cp437_table [] = {
	{0x00, 0x00, 0x0080, 0x00C7},
	{0x00, 0x00, 0x0081, 0x00FC},
	{0x00, 0x00, 0x0082, 0x00E9},
	{0x00, 0x00, 0x0083, 0x00E2},
	{0x00, 0x00, 0x0084, 0x00E4},
	{0x00, 0x00, 0x0085, 0x00E0},
	{0x00, 0x00, 0x0086, 0x00E5},
	{0x00, 0x00, 0x0087, 0x00E7},
	{0x00, 0x00, 0x0088, 0x00EA},
	{0x00, 0x00, 0x0089, 0x00EB},
	{0x00, 0x00, 0x008A, 0x00E8},
	{0x00, 0x00, 0x008B, 0x00EF},
	{0x00, 0x00, 0x008C, 0x00EE},
	{0x00, 0x00, 0x008D, 0x00EC},
	{0x00, 0x00, 0x008E, 0x00C4},
	{0x00, 0x00, 0x008F, 0x00C5},
	{0x00, 0x00, 0x0090, 0x00C9},
	{0x00, 0x00, 0x0091, 0x00E6},
	{0x00, 0x00, 0x0092, 0x00C6},
	{0x00, 0x00, 0x0093, 0x00F4},
	{0x00, 0x00, 0x0094, 0x00F6},
	{0x00, 0x00, 0x0095, 0x00F2},
	{0x00, 0x00, 0x0096, 0x00FB},
	{0x00, 0x00, 0x0097, 0x00F9},
	{0x00, 0x00, 0x0098, 0x00FF},
	{0x00, 0x00, 0x0099, 0x00D6},
	{0x00, 0x00, 0x009A, 0x00DC},
	{0x00, 0x00, 0x009B, 0x00A2},
	{0x00, 0x00, 0x009C, 0x00A3},
	{0x00, 0x00, 0x009D, 0x00A5},
	{0x00, 0x00, 0x009E, 0x20A7},
	{0x00, 0x00, 0x009F, 0x0192},
	{0x00, 0x00, 0x00A0, 0x00E1},
	{0x00, 0x00, 0x00A1, 0x00ED},
	{0x00, 0x00, 0x00A2, 0x00F3},
	{0x00, 0x00, 0x00A3, 0x00FA},
	{0x00, 0x00, 0x00A4, 0x00F1},
	{0x00, 0x00, 0x00A5, 0x00D1},
	{0x00, 0x00, 0x00A6, 0x00AA},
	{0x00, 0x00, 0x00A7, 0x00BA},
	{0x00, 0x00, 0x00A8, 0x00BF},
	{0x00, 0x00, 0x00A9, 0x2310},
	{0x00, 0x00, 0x00AA, 0x00AC},
	{0x00, 0x00, 0x00AB, 0x00BD},
	{0x00, 0x00, 0x00AC, 0x00BC},
	{0x00, 0x00, 0x00AD, 0x00A1},
	{0x00, 0x00, 0x00AE, 0x00AB},
	{0x00, 0x00, 0x00AF, 0x00BB},
	{0x00, 0x00, 0x00B0, 0x2591},
	{0x00, 0x00, 0x00B1, 0x2592},
	{0x00, 0x00, 0x00B2, 0x2593},
	{0x00, 0x00, 0x00B3, 0x2502},
	{0x00, 0x00, 0x00B4, 0x2524},
	{0x00, 0x00, 0x00B5, 0x2561},
	{0x00, 0x00, 0x00B6, 0x2562},
	{0x00, 0x00, 0x00B7, 0x2556},
	{0x00, 0x00, 0x00B8, 0x2555},
	{0x00, 0x00, 0x00B9, 0x2563},
	{0x00, 0x00, 0x00BA, 0x2551},
	{0x00, 0x00, 0x00BB, 0x2557},
	{0x00, 0x00, 0x00BC, 0x255D},
	{0x00, 0x00, 0x00BD, 0x255C},
	{0x00, 0x00, 0x00BE, 0x255B},
	{0x00, 0x00, 0x00BF, 0x2510},
	{0x00, 0x00, 0x00C0, 0x2514},
	{0x00, 0x00, 0x00C1, 0x2534},
	{0x00, 0x00, 0x00C2, 0x252C},
	{0x00, 0x00, 0x00C3, 0x251C},
	{0x00, 0x00, 0x00C4, 0x2500},
	{0x00, 0x00, 0x00C5, 0x253C},
	{0x00, 0x00, 0x00C6, 0x255E},
	{0x00, 0x00, 0x00C7, 0x255F},
	{0x00, 0x00, 0x00C8, 0x255A},
	{0x00, 0x00, 0x00C9, 0x2554},
	{0x00, 0x00, 0x00CA, 0x2569},
	{0x00, 0x00, 0x00CB, 0x2566},
	{0x00, 0x00, 0x00CC, 0x2560},
	{0x00, 0x00, 0x00CD, 0x2550},
	{0x00, 0x00, 0x00CE, 0x256C},
	{0x00, 0x00, 0x00CF, 0x2567},
	{0x00, 0x00, 0x00D0, 0x2568},
	{0x00, 0x00, 0x00D1, 0x2564},
	{0x00, 0x00, 0x00D2, 0x2565},
	{0x00, 0x00, 0x00D3, 0x2559},
	{0x00, 0x00, 0x00D4, 0x2558},
	{0x00, 0x00, 0x00D5, 0x2552},
	{0x00, 0x00, 0x00D6, 0x2553},
	{0x00, 0x00, 0x00D7, 0x256B},
	{0x00, 0x00, 0x00D8, 0x256A},
	{0x00, 0x00, 0x00D9, 0x2518},
	{0x00, 0x00, 0x00DA, 0x250C},
	{0x00, 0x00, 0x00DB, 0x2588},
	{0x00, 0x00, 0x00DC, 0x2584},
	{0x00, 0x00, 0x00DD, 0x258C},
	{0x00, 0x00, 0x00DE, 0x2590},
	{0x00, 0x00, 0x00DF, 0x2580},
	{0x00, 0x00, 0x00E0, 0x03B1},
	{0x00, 0x00, 0x00E1, 0x00DF},
	{0x00, 0x00, 0x00E2, 0x0393},
	{0x00, 0x00, 0x00E3, 0x03C0},
	{0x00, 0x00, 0x00E4, 0x03A3},
	{0x00, 0x00, 0x00E5, 0x03C3},
	{0x00, 0x00, 0x00E6, 0x00B5},
	{0x00, 0x00, 0x00E7, 0x03C4},
	{0x00, 0x00, 0x00E8, 0x03A6},
	{0x00, 0x00, 0x00E9, 0x0398},
	{0x00, 0x00, 0x00EA, 0x03A9},
	{0x00, 0x00, 0x00EB, 0x03B4},
	{0x00, 0x00, 0x00EC, 0x221E},
	{0x00, 0x00, 0x00ED, 0x03C6},
	{0x00, 0x00, 0x00EE, 0x03B5},
	{0x00, 0x00, 0x00EF, 0x2229},
	{0x00, 0x00, 0x00F0, 0x2261},
	{0x00, 0x00, 0x00F1, 0x00B1},
	{0x00, 0x00, 0x00F2, 0x2265},
	{0x00, 0x00, 0x00F3, 0x2264},
	{0x00, 0x00, 0x00F4, 0x2320},
	{0x00, 0x00, 0x00F5, 0x2321},
	{0x00, 0x00, 0x00F6, 0x00F7},
	{0x00, 0x00, 0x00F7, 0x2248},
	{0x00, 0x00, 0x00F8, 0x00B0},
	{0x00, 0x00, 0x00F9, 0x2219},
	{0x00, 0x00, 0x00FA, 0x00B7},
	{0x00, 0x00, 0x00FB, 0x221A},
	{0x00, 0x00, 0x00FC, 0x207F},
	{0x00, 0x00, 0x00FD, 0x00B2},
	{0x00, 0x00, 0x00FE, 0x25A0},
	{0x00, 0x00, 0x00FF, 0x00A0},
};
unsigned int cp437_table_len = arrlen (cp437_table);
