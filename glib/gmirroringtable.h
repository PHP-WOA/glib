﻿/* gmirroringtable.h
 * generated by gen-mirroring-tab 
 * from the file BidiMirroring.txt of */

#define PACKTAB_UINT8 guint8
#define PACKTAB_UINT16 guint16
#define PACKTAB_UINT32 guint32

/*
  generated by packtab.c version 3

  use GLIB_GET_MIRRORING_DELTA(key) to access your table

  assumed sizeof(gint16): 2
  required memory: 1008
  lookups: 4
  partition shape: Mir[256][16][4][4]
  different table entries: 1 14 56 38
*/

/* *INDENT-OFF* */

static const gint16 MirLev3[4*38] = {
#define MirLev3_0000 0x0
  0,0,0,0,
#define MirLev3_0028 0x4
  1,-1,0,0,
#define MirLev3_003C 0x8
  2,0,-2,0,
#define MirLev3_0058 0xC
  0,0,0,2,
#define MirLev3_005C 0x10
  0,-2,0,0,
#define MirLev3_00A8 0x14
  0,0,0,16,
#define MirLev3_00B8 0x18
  0,0,0,-16,
#define MirLev3_0F38 0x1C
  0,0,1,-1,
#define MirLev3_1698 0x20
  0,0,0,1,
#define MirLev3_169C 0x24
  -1,0,0,0,
#define MirLev3_2038 0x28
  0,1,-1,0,
#define MirLev3_2208 0x2C
  3,3,3,-3,
#define MirLev3_220C 0x30
  -3,-3,0,0,
#define MirLev3_2214 0x34
  0,2016,0,0,
#define MirLev3_2240 0x38
  0,0,0,138,
#define MirLev3_2264 0x3C
  1,-1,1,-1,
#define MirLev3_2290 0x40
  -1,1,-1,0,
#define MirLev3_2298 0x44
  1824,0,0,0,
#define MirLev3_22A4 0x48
  0,0,2104,0,
#define MirLev3_22A8 0x4C
  2108,2106,0,2106,
#define MirLev3_22C8 0x50
  0,1,-1,1,
#define MirLev3_22CC 0x54
  -1,-138,0,0,
#define MirLev3_22F0 0x58
  1,-1,8,8,
#define MirLev3_22F4 0x5C
  8,0,7,7,
#define MirLev3_22F8 0x60
  0,0,-8,-8,
#define MirLev3_22FC 0x64
  -8,-7,-7,0,
#define MirLev3_2984 0x68
  -1,1,-1,1,
#define MirLev3_298C 0x6C
  -1,3,1,-1,
#define MirLev3_2990 0x70
  -3,1,-1,1,
#define MirLev3_29B8 0x74
  -1824,0,0,0,
#define MirLev3_29F4 0x78
  0,-2016,0,0,
#define MirLev3_2AAC 0x7C
  1,-1,0,1,
#define MirLev3_2AB0 0x80
  -1,0,0,1,
#define MirLev3_2ADC 0x84
  0,0,-2104,0,
#define MirLev3_2AE0 0x88
  0,0,0,-2106,
#define MirLev3_2AE4 0x8C
  -2108,-2106,0,0,
#define MirLev3_FF5C 0x90
  0,-2,0,1,
#define MirLev3_FF60 0x94
  -1,0,1,-1,
};

static const PACKTAB_UINT8 MirLev2[4*56] = {
#define MirLev2_0000 0x0
  MirLev3_0000,  /* 0000..0003 */
  MirLev3_0000,  /* 0004..0007 */
  MirLev3_0000,  /* 0008..000B */
  MirLev3_0000,  /* 000C..000F */
#define MirLev2_0020 0x4
  MirLev3_0000,  /* 0020..0023 */
  MirLev3_0000,  /* 0024..0027 */
  MirLev3_0028,  /* 0028..002B */
  MirLev3_0000,  /* 002C..002F */
#define MirLev2_0030 0x8
  MirLev3_0000,  /* 0030..0033 */
  MirLev3_0000,  /* 0034..0037 */
  MirLev3_0000,  /* 0038..003B */
  MirLev3_003C,  /* 003C..003F */
#define MirLev2_0050 0xC
  MirLev3_0000,  /* 0050..0053 */
  MirLev3_0000,  /* 0054..0057 */
  MirLev3_0058,  /* 0058..005B */
  MirLev3_005C,  /* 005C..005F */
#define MirLev2_00A0 0x10
  MirLev3_0000,  /* 00A0..00A3 */
  MirLev3_0000,  /* 00A4..00A7 */
  MirLev3_00A8,  /* 00A8..00AB */
  MirLev3_0000,  /* 00AC..00AF */
#define MirLev2_00B0 0x14
  MirLev3_0000,  /* 00B0..00B3 */
  MirLev3_0000,  /* 00B4..00B7 */
  MirLev3_00B8,  /* 00B8..00BB */
  MirLev3_0000,  /* 00BC..00BF */
#define MirLev2_0F30 0x18
  MirLev3_0000,  /* 0F30..0F33 */
  MirLev3_0000,  /* 0F34..0F37 */
  MirLev3_0F38,  /* 0F38..0F3B */
  MirLev3_0028,  /* 0F3C..0F3F */
#define MirLev2_1690 0x1C
  MirLev3_0000,  /* 1690..1693 */
  MirLev3_0000,  /* 1694..1697 */
  MirLev3_1698,  /* 1698..169B */
  MirLev3_169C,  /* 169C..169F */
#define MirLev2_2030 0x20
  MirLev3_0000,  /* 2030..2033 */
  MirLev3_0000,  /* 2034..2037 */
  MirLev3_2038,  /* 2038..203B */
  MirLev3_0000,  /* 203C..203F */
#define MirLev2_2040 0x24
  MirLev3_0000,  /* 2040..2043 */
  MirLev3_2038,  /* 2044..2047 */
  MirLev3_0000,  /* 2048..204B */
  MirLev3_0000,  /* 204C..204F */
#define MirLev2_2070 0x28
  MirLev3_0000,  /* 2070..2073 */
  MirLev3_0000,  /* 2074..2077 */
  MirLev3_0000,  /* 2078..207B */
  MirLev3_2038,  /* 207C..207F */
#define MirLev2_2200 0x2C
  MirLev3_0000,  /* 2200..2203 */
  MirLev3_0000,  /* 2204..2207 */
  MirLev3_2208,  /* 2208..220B */
  MirLev3_220C,  /* 220C..220F */
#define MirLev2_2210 0x30
  MirLev3_0000,  /* 2210..2213 */
  MirLev3_2214,  /* 2214..2217 */
  MirLev3_0000,  /* 2218..221B */
  MirLev3_0000,  /* 221C..221F */
#define MirLev2_2230 0x34
  MirLev3_0000,  /* 2230..2233 */
  MirLev3_0000,  /* 2234..2237 */
  MirLev3_0000,  /* 2238..223B */
  MirLev3_0028,  /* 223C..223F */
#define MirLev2_2240 0x38
  MirLev3_2240,  /* 2240..2243 */
  MirLev3_0000,  /* 2244..2247 */
  MirLev3_0000,  /* 2248..224B */
  MirLev3_0000,  /* 224C..224F */
#define MirLev2_2250 0x3C
  MirLev3_0F38,  /* 2250..2253 */
  MirLev3_0028,  /* 2254..2257 */
  MirLev3_0000,  /* 2258..225B */
  MirLev3_0000,  /* 225C..225F */
#define MirLev2_2260 0x40
  MirLev3_0000,  /* 2260..2263 */
  MirLev3_2264,  /* 2264..2267 */
  MirLev3_2264,  /* 2268..226B */
  MirLev3_0F38,  /* 226C..226F */
#define MirLev2_2270 0x44
  MirLev3_2264,  /* 2270..2273 */
  MirLev3_2264,  /* 2274..2277 */
  MirLev3_2264,  /* 2278..227B */
  MirLev3_2264,  /* 227C..227F */
#define MirLev2_2280 0x48
  MirLev3_2264,  /* 2280..2283 */
  MirLev3_2264,  /* 2284..2287 */
  MirLev3_2264,  /* 2288..228B */
  MirLev3_1698,  /* 228C..228F */
#define MirLev2_2290 0x4C
  MirLev3_2290,  /* 2290..2293 */
  MirLev3_0000,  /* 2294..2297 */
  MirLev3_2298,  /* 2298..229B */
  MirLev3_0000,  /* 229C..229F */
#define MirLev2_22A0 0x50
  MirLev3_0F38,  /* 22A0..22A3 */
  MirLev3_22A4,  /* 22A4..22A7 */
  MirLev3_22A8,  /* 22A8..22AB */
  MirLev3_0000,  /* 22AC..22AF */
#define MirLev2_22B0 0x54
  MirLev3_2264,  /* 22B0..22B3 */
  MirLev3_2264,  /* 22B4..22B7 */
  MirLev3_0000,  /* 22B8..22BB */
  MirLev3_0000,  /* 22BC..22BF */
#define MirLev2_22C0 0x58
  MirLev3_0000,  /* 22C0..22C3 */
  MirLev3_0000,  /* 22C4..22C7 */
  MirLev3_22C8,  /* 22C8..22CB */
  MirLev3_22CC,  /* 22CC..22CF */
#define MirLev2_22D0 0x5C
  MirLev3_0028,  /* 22D0..22D3 */
  MirLev3_0F38,  /* 22D4..22D7 */
  MirLev3_2264,  /* 22D8..22DB */
  MirLev3_2264,  /* 22DC..22DF */
#define MirLev2_22E0 0x60
  MirLev3_2264,  /* 22E0..22E3 */
  MirLev3_2264,  /* 22E4..22E7 */
  MirLev3_2264,  /* 22E8..22EB */
  MirLev3_0028,  /* 22EC..22EF */
#define MirLev2_22F0 0x64
  MirLev3_22F0,  /* 22F0..22F3 */
  MirLev3_22F4,  /* 22F4..22F7 */
  MirLev3_22F8,  /* 22F8..22FB */
  MirLev3_22FC,  /* 22FC..22FF */
#define MirLev2_2300 0x68
  MirLev3_0000,  /* 2300..2303 */
  MirLev3_0000,  /* 2304..2307 */
  MirLev3_2264,  /* 2308..230B */
  MirLev3_0000,  /* 230C..230F */
#define MirLev2_2760 0x6C
  MirLev3_0000,  /* 2760..2763 */
  MirLev3_0000,  /* 2764..2767 */
  MirLev3_2264,  /* 2768..276B */
  MirLev3_2264,  /* 276C..276F */
#define MirLev2_2770 0x70
  MirLev3_2264,  /* 2770..2773 */
  MirLev3_0028,  /* 2774..2777 */
  MirLev3_0000,  /* 2778..277B */
  MirLev3_0000,  /* 277C..277F */
#define MirLev2_27C0 0x74
  MirLev3_1698,  /* 27C0..27C3 */
  MirLev3_2290,  /* 27C4..27C7 */
  MirLev3_0028,  /* 27C8..27CB */
  MirLev3_0000,  /* 27CC..27CF */
#define MirLev2_27D0 0x78
  MirLev3_0000,  /* 27D0..27D3 */
  MirLev3_2038,  /* 27D4..27D7 */
  MirLev3_0000,  /* 27D8..27DB */
  MirLev3_2038,  /* 27DC..27DF */
#define MirLev2_27E0 0x7C
  MirLev3_0F38,  /* 27E0..27E3 */
  MirLev3_2264,  /* 27E4..27E7 */
  MirLev3_2264,  /* 27E8..27EB */
  MirLev3_2264,  /* 27EC..27EF */
#define MirLev2_2980 0x80
  MirLev3_1698,  /* 2980..2983 */
  MirLev3_2984,  /* 2984..2987 */
  MirLev3_2984,  /* 2988..298B */
  MirLev3_298C,  /* 298C..298F */
#define MirLev2_2990 0x84
  MirLev3_2990,  /* 2990..2993 */
  MirLev3_2984,  /* 2994..2997 */
  MirLev3_169C,  /* 2998..299B */
  MirLev3_0000,  /* 299C..299F */
#define MirLev2_29B0 0x88
  MirLev3_0000,  /* 29B0..29B3 */
  MirLev3_0000,  /* 29B4..29B7 */
  MirLev3_29B8,  /* 29B8..29BB */
  MirLev3_0000,  /* 29BC..29BF */
#define MirLev2_29C0 0x8C
  MirLev3_0028,  /* 29C0..29C3 */
  MirLev3_0028,  /* 29C4..29C7 */
  MirLev3_0000,  /* 29C8..29CB */
  MirLev3_1698,  /* 29CC..29CF */
#define MirLev2_29D0 0x90
  MirLev3_2290,  /* 29D0..29D3 */
  MirLev3_0028,  /* 29D4..29D7 */
  MirLev3_2264,  /* 29D8..29DB */
  MirLev3_0000,  /* 29DC..29DF */
#define MirLev2_29F0 0x94
  MirLev3_0000,  /* 29F0..29F3 */
  MirLev3_29F4,  /* 29F4..29F7 */
  MirLev3_0028,  /* 29F8..29FB */
  MirLev3_0028,  /* 29FC..29FF */
#define MirLev2_2A20 0x98
  MirLev3_0000,  /* 2A20..2A23 */
  MirLev3_0000,  /* 2A24..2A27 */
  MirLev3_1698,  /* 2A28..2A2B */
  MirLev3_2290,  /* 2A2C..2A2F */
#define MirLev2_2A30 0x9C
  MirLev3_0000,  /* 2A30..2A33 */
  MirLev3_0028,  /* 2A34..2A37 */
  MirLev3_0000,  /* 2A38..2A3B */
  MirLev3_0028,  /* 2A3C..2A3F */
#define MirLev2_2A60 0xA0
  MirLev3_0000,  /* 2A60..2A63 */
  MirLev3_0028,  /* 2A64..2A67 */
  MirLev3_0000,  /* 2A68..2A6B */
  MirLev3_0000,  /* 2A6C..2A6F */
#define MirLev2_2A70 0xA4
  MirLev3_0000,  /* 2A70..2A73 */
  MirLev3_0000,  /* 2A74..2A77 */
  MirLev3_2038,  /* 2A78..2A7B */
  MirLev3_22C8,  /* 2A7C..2A7F */
#define MirLev2_2A80 0xA8
  MirLev3_2984,  /* 2A80..2A83 */
  MirLev3_169C,  /* 2A84..2A87 */
  MirLev3_1698,  /* 2A88..2A8B */
  MirLev3_169C,  /* 2A8C..2A8F */
#define MirLev2_2A90 0xAC
  MirLev3_22C8,  /* 2A90..2A93 */
  MirLev3_2984,  /* 2A94..2A97 */
  MirLev3_2984,  /* 2A98..2A9B */
  MirLev3_169C,  /* 2A9C..2A9F */
#define MirLev2_2AA0 0xB0
  MirLev3_2038,  /* 2AA0..2AA3 */
  MirLev3_0F38,  /* 2AA4..2AA7 */
  MirLev3_2264,  /* 2AA8..2AAB */
  MirLev3_2AAC,  /* 2AAC..2AAF */
#define MirLev2_2AB0 0xB4
  MirLev3_2AB0,  /* 2AB0..2AB3 */
  MirLev3_169C,  /* 2AB4..2AB7 */
  MirLev3_1698,  /* 2AB8..2ABB */
  MirLev3_2984,  /* 2ABC..2ABF */
#define MirLev2_2AC0 0xB8
  MirLev3_2984,  /* 2AC0..2AC3 */
  MirLev3_2290,  /* 2AC4..2AC7 */
  MirLev3_0000,  /* 2AC8..2ACB */
  MirLev3_22C8,  /* 2ACC..2ACF */
#define MirLev2_2AD0 0xBC
  MirLev3_2984,  /* 2AD0..2AD3 */
  MirLev3_2290,  /* 2AD4..2AD7 */
  MirLev3_0000,  /* 2AD8..2ADB */
  MirLev3_2ADC,  /* 2ADC..2ADF */
#define MirLev2_2AE0 0xC0
  MirLev3_2AE0,  /* 2AE0..2AE3 */
  MirLev3_2AE4,  /* 2AE4..2AE7 */
  MirLev3_0000,  /* 2AE8..2AEB */
  MirLev3_0028,  /* 2AEC..2AEF */
#define MirLev2_2AF0 0xC4
  MirLev3_0000,  /* 2AF0..2AF3 */
  MirLev3_1698,  /* 2AF4..2AF7 */
  MirLev3_2290,  /* 2AF8..2AFB */
  MirLev3_0000,  /* 2AFC..2AFF */
#define MirLev2_2E00 0xC8
  MirLev3_0F38,  /* 2E00..2E03 */
  MirLev3_0028,  /* 2E04..2E07 */
  MirLev3_2038,  /* 2E08..2E0B */
  MirLev3_0028,  /* 2E0C..2E0F */
#define MirLev2_2E20 0xCC
  MirLev3_2264,  /* 2E20..2E23 */
  MirLev3_2264,  /* 2E24..2E27 */
  MirLev3_0028,  /* 2E28..2E2B */
  MirLev3_0000,  /* 2E2C..2E2F */
#define MirLev2_3010 0xD0
  MirLev3_0028,  /* 3010..3013 */
  MirLev3_2264,  /* 3014..3017 */
  MirLev3_2264,  /* 3018..301B */
  MirLev3_0000,  /* 301C..301F */
#define MirLev2_FE50 0xD4
  MirLev3_0000,  /* FE50..FE53 */
  MirLev3_0000,  /* FE54..FE57 */
  MirLev3_22C8,  /* FE58..FE5B */
  MirLev3_2290,  /* FE5C..FE5F */
#define MirLev2_FF50 0xD8
  MirLev3_0000,  /* FF50..FF53 */
  MirLev3_0000,  /* FF54..FF57 */
  MirLev3_0058,  /* FF58..FF5B */
  MirLev3_FF5C,  /* FF5C..FF5F */
#define MirLev2_FF60 0xDC
  MirLev3_FF60,  /* FF60..FF63 */
  MirLev3_0000,  /* FF64..FF67 */
  MirLev3_0000,  /* FF68..FF6B */
  MirLev3_0000,  /* FF6C..FF6F */
};

static const PACKTAB_UINT8 MirLev1[16*14] = {
#define MirLev1_0000 0x0
  MirLev2_0000,  /* 0000..000F */
  MirLev2_0000,  /* 0010..001F */
  MirLev2_0020,  /* 0020..002F */
  MirLev2_0030,  /* 0030..003F */
  MirLev2_0000,  /* 0040..004F */
  MirLev2_0050,  /* 0050..005F */
  MirLev2_0000,  /* 0060..006F */
  MirLev2_0050,  /* 0070..007F */
  MirLev2_0000,  /* 0080..008F */
  MirLev2_0000,  /* 0090..009F */
  MirLev2_00A0,  /* 00A0..00AF */
  MirLev2_00B0,  /* 00B0..00BF */
  MirLev2_0000,  /* 00C0..00CF */
  MirLev2_0000,  /* 00D0..00DF */
  MirLev2_0000,  /* 00E0..00EF */
  MirLev2_0000,  /* 00F0..00FF */
#define MirLev1_0100 0x10
  MirLev2_0000,  /* 0100..010F */
  MirLev2_0000,  /* 0110..011F */
  MirLev2_0000,  /* 0120..012F */
  MirLev2_0000,  /* 0130..013F */
  MirLev2_0000,  /* 0140..014F */
  MirLev2_0000,  /* 0150..015F */
  MirLev2_0000,  /* 0160..016F */
  MirLev2_0000,  /* 0170..017F */
  MirLev2_0000,  /* 0180..018F */
  MirLev2_0000,  /* 0190..019F */
  MirLev2_0000,  /* 01A0..01AF */
  MirLev2_0000,  /* 01B0..01BF */
  MirLev2_0000,  /* 01C0..01CF */
  MirLev2_0000,  /* 01D0..01DF */
  MirLev2_0000,  /* 01E0..01EF */
  MirLev2_0000,  /* 01F0..01FF */
#define MirLev1_0F00 0x20
  MirLev2_0000,  /* 0F00..0F0F */
  MirLev2_0000,  /* 0F10..0F1F */
  MirLev2_0000,  /* 0F20..0F2F */
  MirLev2_0F30,  /* 0F30..0F3F */
  MirLev2_0000,  /* 0F40..0F4F */
  MirLev2_0000,  /* 0F50..0F5F */
  MirLev2_0000,  /* 0F60..0F6F */
  MirLev2_0000,  /* 0F70..0F7F */
  MirLev2_0000,  /* 0F80..0F8F */
  MirLev2_0000,  /* 0F90..0F9F */
  MirLev2_0000,  /* 0FA0..0FAF */
  MirLev2_0000,  /* 0FB0..0FBF */
  MirLev2_0000,  /* 0FC0..0FCF */
  MirLev2_0000,  /* 0FD0..0FDF */
  MirLev2_0000,  /* 0FE0..0FEF */
  MirLev2_0000,  /* 0FF0..0FFF */
#define MirLev1_1600 0x30
  MirLev2_0000,  /* 1600..160F */
  MirLev2_0000,  /* 1610..161F */
  MirLev2_0000,  /* 1620..162F */
  MirLev2_0000,  /* 1630..163F */
  MirLev2_0000,  /* 1640..164F */
  MirLev2_0000,  /* 1650..165F */
  MirLev2_0000,  /* 1660..166F */
  MirLev2_0000,  /* 1670..167F */
  MirLev2_0000,  /* 1680..168F */
  MirLev2_1690,  /* 1690..169F */
  MirLev2_0000,  /* 16A0..16AF */
  MirLev2_0000,  /* 16B0..16BF */
  MirLev2_0000,  /* 16C0..16CF */
  MirLev2_0000,  /* 16D0..16DF */
  MirLev2_0000,  /* 16E0..16EF */
  MirLev2_0000,  /* 16F0..16FF */
#define MirLev1_2000 0x40
  MirLev2_0000,  /* 2000..200F */
  MirLev2_0000,  /* 2010..201F */
  MirLev2_0000,  /* 2020..202F */
  MirLev2_2030,  /* 2030..203F */
  MirLev2_2040,  /* 2040..204F */
  MirLev2_0000,  /* 2050..205F */
  MirLev2_0000,  /* 2060..206F */
  MirLev2_2070,  /* 2070..207F */
  MirLev2_2070,  /* 2080..208F */
  MirLev2_0000,  /* 2090..209F */
  MirLev2_0000,  /* 20A0..20AF */
  MirLev2_0000,  /* 20B0..20BF */
  MirLev2_0000,  /* 20C0..20CF */
  MirLev2_0000,  /* 20D0..20DF */
  MirLev2_0000,  /* 20E0..20EF */
  MirLev2_0000,  /* 20F0..20FF */
#define MirLev1_2200 0x50
  MirLev2_2200,  /* 2200..220F */
  MirLev2_2210,  /* 2210..221F */
  MirLev2_0000,  /* 2220..222F */
  MirLev2_2230,  /* 2230..223F */
  MirLev2_2240,  /* 2240..224F */
  MirLev2_2250,  /* 2250..225F */
  MirLev2_2260,  /* 2260..226F */
  MirLev2_2270,  /* 2270..227F */
  MirLev2_2280,  /* 2280..228F */
  MirLev2_2290,  /* 2290..229F */
  MirLev2_22A0,  /* 22A0..22AF */
  MirLev2_22B0,  /* 22B0..22BF */
  MirLev2_22C0,  /* 22C0..22CF */
  MirLev2_22D0,  /* 22D0..22DF */
  MirLev2_22E0,  /* 22E0..22EF */
  MirLev2_22F0,  /* 22F0..22FF */
#define MirLev1_2300 0x60
  MirLev2_2300,  /* 2300..230F */
  MirLev2_0000,  /* 2310..231F */
  MirLev2_2030,  /* 2320..232F */
  MirLev2_0000,  /* 2330..233F */
  MirLev2_0000,  /* 2340..234F */
  MirLev2_0000,  /* 2350..235F */
  MirLev2_0000,  /* 2360..236F */
  MirLev2_0000,  /* 2370..237F */
  MirLev2_0000,  /* 2380..238F */
  MirLev2_0000,  /* 2390..239F */
  MirLev2_0000,  /* 23A0..23AF */
  MirLev2_0000,  /* 23B0..23BF */
  MirLev2_0000,  /* 23C0..23CF */
  MirLev2_0000,  /* 23D0..23DF */
  MirLev2_0000,  /* 23E0..23EF */
  MirLev2_0000,  /* 23F0..23FF */
#define MirLev1_2700 0x70
  MirLev2_0000,  /* 2700..270F */
  MirLev2_0000,  /* 2710..271F */
  MirLev2_0000,  /* 2720..272F */
  MirLev2_0000,  /* 2730..273F */
  MirLev2_0000,  /* 2740..274F */
  MirLev2_0000,  /* 2750..275F */
  MirLev2_2760,  /* 2760..276F */
  MirLev2_2770,  /* 2770..277F */
  MirLev2_0000,  /* 2780..278F */
  MirLev2_0000,  /* 2790..279F */
  MirLev2_0000,  /* 27A0..27AF */
  MirLev2_0000,  /* 27B0..27BF */
  MirLev2_27C0,  /* 27C0..27CF */
  MirLev2_27D0,  /* 27D0..27DF */
  MirLev2_27E0,  /* 27E0..27EF */
  MirLev2_0000,  /* 27F0..27FF */
#define MirLev1_2900 0x80
  MirLev2_0000,  /* 2900..290F */
  MirLev2_0000,  /* 2910..291F */
  MirLev2_0000,  /* 2920..292F */
  MirLev2_0000,  /* 2930..293F */
  MirLev2_0000,  /* 2940..294F */
  MirLev2_0000,  /* 2950..295F */
  MirLev2_0000,  /* 2960..296F */
  MirLev2_0000,  /* 2970..297F */
  MirLev2_2980,  /* 2980..298F */
  MirLev2_2990,  /* 2990..299F */
  MirLev2_0000,  /* 29A0..29AF */
  MirLev2_29B0,  /* 29B0..29BF */
  MirLev2_29C0,  /* 29C0..29CF */
  MirLev2_29D0,  /* 29D0..29DF */
  MirLev2_0000,  /* 29E0..29EF */
  MirLev2_29F0,  /* 29F0..29FF */
#define MirLev1_2A00 0x90
  MirLev2_0000,  /* 2A00..2A0F */
  MirLev2_0000,  /* 2A10..2A1F */
  MirLev2_2A20,  /* 2A20..2A2F */
  MirLev2_2A30,  /* 2A30..2A3F */
  MirLev2_0000,  /* 2A40..2A4F */
  MirLev2_0000,  /* 2A50..2A5F */
  MirLev2_2A60,  /* 2A60..2A6F */
  MirLev2_2A70,  /* 2A70..2A7F */
  MirLev2_2A80,  /* 2A80..2A8F */
  MirLev2_2A90,  /* 2A90..2A9F */
  MirLev2_2AA0,  /* 2AA0..2AAF */
  MirLev2_2AB0,  /* 2AB0..2ABF */
  MirLev2_2AC0,  /* 2AC0..2ACF */
  MirLev2_2AD0,  /* 2AD0..2ADF */
  MirLev2_2AE0,  /* 2AE0..2AEF */
  MirLev2_2AF0,  /* 2AF0..2AFF */
#define MirLev1_2E00 0xA0
  MirLev2_2E00,  /* 2E00..2E0F */
  MirLev2_2230,  /* 2E10..2E1F */
  MirLev2_2E20,  /* 2E20..2E2F */
  MirLev2_0000,  /* 2E30..2E3F */
  MirLev2_0000,  /* 2E40..2E4F */
  MirLev2_0000,  /* 2E50..2E5F */
  MirLev2_0000,  /* 2E60..2E6F */
  MirLev2_0000,  /* 2E70..2E7F */
  MirLev2_0000,  /* 2E80..2E8F */
  MirLev2_0000,  /* 2E90..2E9F */
  MirLev2_0000,  /* 2EA0..2EAF */
  MirLev2_0000,  /* 2EB0..2EBF */
  MirLev2_0000,  /* 2EC0..2ECF */
  MirLev2_0000,  /* 2ED0..2EDF */
  MirLev2_0000,  /* 2EE0..2EEF */
  MirLev2_0000,  /* 2EF0..2EFF */
#define MirLev1_3000 0xB0
  MirLev2_2760,  /* 3000..300F */
  MirLev2_3010,  /* 3010..301F */
  MirLev2_0000,  /* 3020..302F */
  MirLev2_0000,  /* 3030..303F */
  MirLev2_0000,  /* 3040..304F */
  MirLev2_0000,  /* 3050..305F */
  MirLev2_0000,  /* 3060..306F */
  MirLev2_0000,  /* 3070..307F */
  MirLev2_0000,  /* 3080..308F */
  MirLev2_0000,  /* 3090..309F */
  MirLev2_0000,  /* 30A0..30AF */
  MirLev2_0000,  /* 30B0..30BF */
  MirLev2_0000,  /* 30C0..30CF */
  MirLev2_0000,  /* 30D0..30DF */
  MirLev2_0000,  /* 30E0..30EF */
  MirLev2_0000,  /* 30F0..30FF */
#define MirLev1_FE00 0xC0
  MirLev2_0000,  /* FE00..FE0F */
  MirLev2_0000,  /* FE10..FE1F */
  MirLev2_0000,  /* FE20..FE2F */
  MirLev2_0000,  /* FE30..FE3F */
  MirLev2_0000,  /* FE40..FE4F */
  MirLev2_FE50,  /* FE50..FE5F */
  MirLev2_2A60,  /* FE60..FE6F */
  MirLev2_0000,  /* FE70..FE7F */
  MirLev2_0000,  /* FE80..FE8F */
  MirLev2_0000,  /* FE90..FE9F */
  MirLev2_0000,  /* FEA0..FEAF */
  MirLev2_0000,  /* FEB0..FEBF */
  MirLev2_0000,  /* FEC0..FECF */
  MirLev2_0000,  /* FED0..FEDF */
  MirLev2_0000,  /* FEE0..FEEF */
  MirLev2_0000,  /* FEF0..FEFF */
#define MirLev1_FF00 0xD0
  MirLev2_0020,  /* FF00..FF0F */
  MirLev2_0030,  /* FF10..FF1F */
  MirLev2_0000,  /* FF20..FF2F */
  MirLev2_0050,  /* FF30..FF3F */
  MirLev2_0000,  /* FF40..FF4F */
  MirLev2_FF50,  /* FF50..FF5F */
  MirLev2_FF60,  /* FF60..FF6F */
  MirLev2_0000,  /* FF70..FF7F */
  MirLev2_0000,  /* FF80..FF8F */
  MirLev2_0000,  /* FF90..FF9F */
  MirLev2_0000,  /* FFA0..FFAF */
  MirLev2_0000,  /* FFB0..FFBF */
  MirLev2_0000,  /* FFC0..FFCF */
  MirLev2_0000,  /* FFD0..FFDF */
  MirLev2_0000,  /* FFE0..FFEF */
  MirLev2_0000,  /* FFF0..FFFF */
};

static const PACKTAB_UINT8 MirLev0[256*1] = {
#define MirLev0_0000 0x0
  MirLev1_0000,  /* 0000..00FF */
  MirLev1_0100,  /* 0100..01FF */
  MirLev1_0100,  /* 0200..02FF */
  MirLev1_0100,  /* 0300..03FF */
  MirLev1_0100,  /* 0400..04FF */
  MirLev1_0100,  /* 0500..05FF */
  MirLev1_0100,  /* 0600..06FF */
  MirLev1_0100,  /* 0700..07FF */
  MirLev1_0100,  /* 0800..08FF */
  MirLev1_0100,  /* 0900..09FF */
  MirLev1_0100,  /* 0A00..0AFF */
  MirLev1_0100,  /* 0B00..0BFF */
  MirLev1_0100,  /* 0C00..0CFF */
  MirLev1_0100,  /* 0D00..0DFF */
  MirLev1_0100,  /* 0E00..0EFF */
  MirLev1_0F00,  /* 0F00..0FFF */
  MirLev1_0100,  /* 1000..10FF */
  MirLev1_0100,  /* 1100..11FF */
  MirLev1_0100,  /* 1200..12FF */
  MirLev1_0100,  /* 1300..13FF */
  MirLev1_0100,  /* 1400..14FF */
  MirLev1_0100,  /* 1500..15FF */
  MirLev1_1600,  /* 1600..16FF */
  MirLev1_0100,  /* 1700..17FF */
  MirLev1_0100,  /* 1800..18FF */
  MirLev1_0100,  /* 1900..19FF */
  MirLev1_0100,  /* 1A00..1AFF */
  MirLev1_0100,  /* 1B00..1BFF */
  MirLev1_0100,  /* 1C00..1CFF */
  MirLev1_0100,  /* 1D00..1DFF */
  MirLev1_0100,  /* 1E00..1EFF */
  MirLev1_0100,  /* 1F00..1FFF */
  MirLev1_2000,  /* 2000..20FF */
  MirLev1_0100,  /* 2100..21FF */
  MirLev1_2200,  /* 2200..22FF */
  MirLev1_2300,  /* 2300..23FF */
  MirLev1_0100,  /* 2400..24FF */
  MirLev1_0100,  /* 2500..25FF */
  MirLev1_0100,  /* 2600..26FF */
  MirLev1_2700,  /* 2700..27FF */
  MirLev1_0100,  /* 2800..28FF */
  MirLev1_2900,  /* 2900..29FF */
  MirLev1_2A00,  /* 2A00..2AFF */
  MirLev1_0100,  /* 2B00..2BFF */
  MirLev1_0100,  /* 2C00..2CFF */
  MirLev1_0100,  /* 2D00..2DFF */
  MirLev1_2E00,  /* 2E00..2EFF */
  MirLev1_0100,  /* 2F00..2FFF */
  MirLev1_3000,  /* 3000..30FF */
  MirLev1_0100,  /* 3100..31FF */
  MirLev1_0100,  /* 3200..32FF */
  MirLev1_0100,  /* 3300..33FF */
  MirLev1_0100,  /* 3400..34FF */
  MirLev1_0100,  /* 3500..35FF */
  MirLev1_0100,  /* 3600..36FF */
  MirLev1_0100,  /* 3700..37FF */
  MirLev1_0100,  /* 3800..38FF */
  MirLev1_0100,  /* 3900..39FF */
  MirLev1_0100,  /* 3A00..3AFF */
  MirLev1_0100,  /* 3B00..3BFF */
  MirLev1_0100,  /* 3C00..3CFF */
  MirLev1_0100,  /* 3D00..3DFF */
  MirLev1_0100,  /* 3E00..3EFF */
  MirLev1_0100,  /* 3F00..3FFF */
  MirLev1_0100,  /* 4000..40FF */
  MirLev1_0100,  /* 4100..41FF */
  MirLev1_0100,  /* 4200..42FF */
  MirLev1_0100,  /* 4300..43FF */
  MirLev1_0100,  /* 4400..44FF */
  MirLev1_0100,  /* 4500..45FF */
  MirLev1_0100,  /* 4600..46FF */
  MirLev1_0100,  /* 4700..47FF */
  MirLev1_0100,  /* 4800..48FF */
  MirLev1_0100,  /* 4900..49FF */
  MirLev1_0100,  /* 4A00..4AFF */
  MirLev1_0100,  /* 4B00..4BFF */
  MirLev1_0100,  /* 4C00..4CFF */
  MirLev1_0100,  /* 4D00..4DFF */
  MirLev1_0100,  /* 4E00..4EFF */
  MirLev1_0100,  /* 4F00..4FFF */
  MirLev1_0100,  /* 5000..50FF */
  MirLev1_0100,  /* 5100..51FF */
  MirLev1_0100,  /* 5200..52FF */
  MirLev1_0100,  /* 5300..53FF */
  MirLev1_0100,  /* 5400..54FF */
  MirLev1_0100,  /* 5500..55FF */
  MirLev1_0100,  /* 5600..56FF */
  MirLev1_0100,  /* 5700..57FF */
  MirLev1_0100,  /* 5800..58FF */
  MirLev1_0100,  /* 5900..59FF */
  MirLev1_0100,  /* 5A00..5AFF */
  MirLev1_0100,  /* 5B00..5BFF */
  MirLev1_0100,  /* 5C00..5CFF */
  MirLev1_0100,  /* 5D00..5DFF */
  MirLev1_0100,  /* 5E00..5EFF */
  MirLev1_0100,  /* 5F00..5FFF */
  MirLev1_0100,  /* 6000..60FF */
  MirLev1_0100,  /* 6100..61FF */
  MirLev1_0100,  /* 6200..62FF */
  MirLev1_0100,  /* 6300..63FF */
  MirLev1_0100,  /* 6400..64FF */
  MirLev1_0100,  /* 6500..65FF */
  MirLev1_0100,  /* 6600..66FF */
  MirLev1_0100,  /* 6700..67FF */
  MirLev1_0100,  /* 6800..68FF */
  MirLev1_0100,  /* 6900..69FF */
  MirLev1_0100,  /* 6A00..6AFF */
  MirLev1_0100,  /* 6B00..6BFF */
  MirLev1_0100,  /* 6C00..6CFF */
  MirLev1_0100,  /* 6D00..6DFF */
  MirLev1_0100,  /* 6E00..6EFF */
  MirLev1_0100,  /* 6F00..6FFF */
  MirLev1_0100,  /* 7000..70FF */
  MirLev1_0100,  /* 7100..71FF */
  MirLev1_0100,  /* 7200..72FF */
  MirLev1_0100,  /* 7300..73FF */
  MirLev1_0100,  /* 7400..74FF */
  MirLev1_0100,  /* 7500..75FF */
  MirLev1_0100,  /* 7600..76FF */
  MirLev1_0100,  /* 7700..77FF */
  MirLev1_0100,  /* 7800..78FF */
  MirLev1_0100,  /* 7900..79FF */
  MirLev1_0100,  /* 7A00..7AFF */
  MirLev1_0100,  /* 7B00..7BFF */
  MirLev1_0100,  /* 7C00..7CFF */
  MirLev1_0100,  /* 7D00..7DFF */
  MirLev1_0100,  /* 7E00..7EFF */
  MirLev1_0100,  /* 7F00..7FFF */
  MirLev1_0100,  /* 8000..80FF */
  MirLev1_0100,  /* 8100..81FF */
  MirLev1_0100,  /* 8200..82FF */
  MirLev1_0100,  /* 8300..83FF */
  MirLev1_0100,  /* 8400..84FF */
  MirLev1_0100,  /* 8500..85FF */
  MirLev1_0100,  /* 8600..86FF */
  MirLev1_0100,  /* 8700..87FF */
  MirLev1_0100,  /* 8800..88FF */
  MirLev1_0100,  /* 8900..89FF */
  MirLev1_0100,  /* 8A00..8AFF */
  MirLev1_0100,  /* 8B00..8BFF */
  MirLev1_0100,  /* 8C00..8CFF */
  MirLev1_0100,  /* 8D00..8DFF */
  MirLev1_0100,  /* 8E00..8EFF */
  MirLev1_0100,  /* 8F00..8FFF */
  MirLev1_0100,  /* 9000..90FF */
  MirLev1_0100,  /* 9100..91FF */
  MirLev1_0100,  /* 9200..92FF */
  MirLev1_0100,  /* 9300..93FF */
  MirLev1_0100,  /* 9400..94FF */
  MirLev1_0100,  /* 9500..95FF */
  MirLev1_0100,  /* 9600..96FF */
  MirLev1_0100,  /* 9700..97FF */
  MirLev1_0100,  /* 9800..98FF */
  MirLev1_0100,  /* 9900..99FF */
  MirLev1_0100,  /* 9A00..9AFF */
  MirLev1_0100,  /* 9B00..9BFF */
  MirLev1_0100,  /* 9C00..9CFF */
  MirLev1_0100,  /* 9D00..9DFF */
  MirLev1_0100,  /* 9E00..9EFF */
  MirLev1_0100,  /* 9F00..9FFF */
  MirLev1_0100,  /* A000..A0FF */
  MirLev1_0100,  /* A100..A1FF */
  MirLev1_0100,  /* A200..A2FF */
  MirLev1_0100,  /* A300..A3FF */
  MirLev1_0100,  /* A400..A4FF */
  MirLev1_0100,  /* A500..A5FF */
  MirLev1_0100,  /* A600..A6FF */
  MirLev1_0100,  /* A700..A7FF */
  MirLev1_0100,  /* A800..A8FF */
  MirLev1_0100,  /* A900..A9FF */
  MirLev1_0100,  /* AA00..AAFF */
  MirLev1_0100,  /* AB00..ABFF */
  MirLev1_0100,  /* AC00..ACFF */
  MirLev1_0100,  /* AD00..ADFF */
  MirLev1_0100,  /* AE00..AEFF */
  MirLev1_0100,  /* AF00..AFFF */
  MirLev1_0100,  /* B000..B0FF */
  MirLev1_0100,  /* B100..B1FF */
  MirLev1_0100,  /* B200..B2FF */
  MirLev1_0100,  /* B300..B3FF */
  MirLev1_0100,  /* B400..B4FF */
  MirLev1_0100,  /* B500..B5FF */
  MirLev1_0100,  /* B600..B6FF */
  MirLev1_0100,  /* B700..B7FF */
  MirLev1_0100,  /* B800..B8FF */
  MirLev1_0100,  /* B900..B9FF */
  MirLev1_0100,  /* BA00..BAFF */
  MirLev1_0100,  /* BB00..BBFF */
  MirLev1_0100,  /* BC00..BCFF */
  MirLev1_0100,  /* BD00..BDFF */
  MirLev1_0100,  /* BE00..BEFF */
  MirLev1_0100,  /* BF00..BFFF */
  MirLev1_0100,  /* C000..C0FF */
  MirLev1_0100,  /* C100..C1FF */
  MirLev1_0100,  /* C200..C2FF */
  MirLev1_0100,  /* C300..C3FF */
  MirLev1_0100,  /* C400..C4FF */
  MirLev1_0100,  /* C500..C5FF */
  MirLev1_0100,  /* C600..C6FF */
  MirLev1_0100,  /* C700..C7FF */
  MirLev1_0100,  /* C800..C8FF */
  MirLev1_0100,  /* C900..C9FF */
  MirLev1_0100,  /* CA00..CAFF */
  MirLev1_0100,  /* CB00..CBFF */
  MirLev1_0100,  /* CC00..CCFF */
  MirLev1_0100,  /* CD00..CDFF */
  MirLev1_0100,  /* CE00..CEFF */
  MirLev1_0100,  /* CF00..CFFF */
  MirLev1_0100,  /* D000..D0FF */
  MirLev1_0100,  /* D100..D1FF */
  MirLev1_0100,  /* D200..D2FF */
  MirLev1_0100,  /* D300..D3FF */
  MirLev1_0100,  /* D400..D4FF */
  MirLev1_0100,  /* D500..D5FF */
  MirLev1_0100,  /* D600..D6FF */
  MirLev1_0100,  /* D700..D7FF */
  MirLev1_0100,  /* D800..D8FF */
  MirLev1_0100,  /* D900..D9FF */
  MirLev1_0100,  /* DA00..DAFF */
  MirLev1_0100,  /* DB00..DBFF */
  MirLev1_0100,  /* DC00..DCFF */
  MirLev1_0100,  /* DD00..DDFF */
  MirLev1_0100,  /* DE00..DEFF */
  MirLev1_0100,  /* DF00..DFFF */
  MirLev1_0100,  /* E000..E0FF */
  MirLev1_0100,  /* E100..E1FF */
  MirLev1_0100,  /* E200..E2FF */
  MirLev1_0100,  /* E300..E3FF */
  MirLev1_0100,  /* E400..E4FF */
  MirLev1_0100,  /* E500..E5FF */
  MirLev1_0100,  /* E600..E6FF */
  MirLev1_0100,  /* E700..E7FF */
  MirLev1_0100,  /* E800..E8FF */
  MirLev1_0100,  /* E900..E9FF */
  MirLev1_0100,  /* EA00..EAFF */
  MirLev1_0100,  /* EB00..EBFF */
  MirLev1_0100,  /* EC00..ECFF */
  MirLev1_0100,  /* ED00..EDFF */
  MirLev1_0100,  /* EE00..EEFF */
  MirLev1_0100,  /* EF00..EFFF */
  MirLev1_0100,  /* F000..F0FF */
  MirLev1_0100,  /* F100..F1FF */
  MirLev1_0100,  /* F200..F2FF */
  MirLev1_0100,  /* F300..F3FF */
  MirLev1_0100,  /* F400..F4FF */
  MirLev1_0100,  /* F500..F5FF */
  MirLev1_0100,  /* F600..F6FF */
  MirLev1_0100,  /* F700..F7FF */
  MirLev1_0100,  /* F800..F8FF */
  MirLev1_0100,  /* F900..F9FF */
  MirLev1_0100,  /* FA00..FAFF */
  MirLev1_0100,  /* FB00..FBFF */
  MirLev1_0100,  /* FC00..FCFF */
  MirLev1_0100,  /* FD00..FDFF */
  MirLev1_FE00,  /* FE00..FEFF */
  MirLev1_FF00,  /* FF00..FFFF */
};

/* *INDENT-ON* */

#define GLIB_GET_MIRRORING_DELTA(x) \
	((x) >= 0x10000 ? 0 :  \
	MirLev3[((x) & 0x03) + \
	MirLev2[((x) >> 2 & 0x03) + \
	MirLev1[((x) >> 4 & 0x0f) + \
	MirLev0[((x) >> 8)]]]])

#undef PACKTAB_UINT8
#undef PACKTAB_UINT16
#undef PACKTAB_UINT32

#define GLIB_GET_MIRRORING(x) ((x) + GLIB_GET_MIRRORING_DELTA(x))

/* End of generated gmirroringtable.h */
