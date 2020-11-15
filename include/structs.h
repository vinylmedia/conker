#ifndef STRUCTS_H
#define STRUCTS_H


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;   // used
    s32 unk10;
    s32 unk14;
    s32 unk18;  // used
} struct00;

typedef struct {
    s32 unk0;   // used
    s32 unk4;   // used
} struct01;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;  // used
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    s16 unk26;
    s16 unk28;  // used
    s16 unk2A;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;  // used
    s32 unk4C;  // used
    s32 unk50;  // used
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8  unk64;
    u8  unk65;
} struct04;

typedef struct {
    u16 unk0;   // used
    u16 unk2;   // used
    u16 unk4;   // used
    u16 unk6;   // used
} struct05;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;  // used
    f32 unk14;  // used
    f32 unk18;
    f32 unk1C;  // used
} struct06;

typedef struct {
    s32 unk0;
} struct36;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
} struct37;

typedef struct {
    s32 unk0;     // used
    s32 unk4;     // used
    s32 unk8;     // used
    s32 unkC;     // used
    s32 unk10;    // used
    s32 unk14;    // used
    s32 unk18;    // used
    s32 unk1C;    // used
    s32 unk20;    // used
    s32 unk24;    // used
    s32 unk28;    // used
    s32 unk2C;    // used
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    struct36 *unk40;
    s32 unk44;    // used
    struct37 *unk48; // used
    s32 unk4C;    // used
    s32 unk50;    // used
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
} struct07;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct10;

typedef struct {
    s16 unk0;
    s16 unk2;
    struct10 unk4[8];
} struct8;

typedef struct struct12 struct12;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    u8  unkE;
} struct9;

typedef struct {
    u16 unk0;
    u8  unk2;
    u8  unk3;       // used
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;       // used
    u32 unk10[16];  // used
} struct11;

struct struct12 {
    s32 unk0;
    s32 unk1;
    u8  unk8;
    u8  unk9;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} struct13;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} struct14;

typedef struct {
    u32 unk0;
    s32 unk4;
    u32 unk8;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;  // used
} struct15;

typedef struct {
    u32 unk0;
    u16 unk4;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    u8  unkF;
    u32 unk10;
    u8  unk14;
    u8  unk15;
    u8  unk16;
    u8  unk17;
    f32 unk18;
    // padding
    u32 pad1C;
    u32 pad20;
    u32 pad24;
    u32 pad28;
    u32 pad2C;
    u32 pad30;
    u32 pad34;
    u32 pad38;
} struct16;

typedef struct {
  f32 unk0;
  f32 unk4;
  f32 unk8;
} struct17;

typedef struct {
  u8 pad0[0x18];
  struct17 *unk18;
  u8 pad1[0x8];
  s32 unk24;
  s32 unk28;
  s32 unk2C;
} struct18;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} struct19;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s8 unkA;
    s8 unkB;
    struct19 *unkC;
} struct20;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    struct20 *unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;    // used
    f32 unk54;    // used
    s32 unk58;    // used
    s32 unk5C;
    s16 unk60;
    s16 unk62;    // used
    s16 unk64;
    s16 unk66;
    s16 unk68;
    s16 unk6A;
    s16 unk6C;
    s16 unk6E;    // used
    s16 unk70;
    s16 unk72;
    s16 unk74;    // used
    s16 unk76;    // used
    s32 unk78;
    s32 unk7C;    // used
    s32 unk80;    // used
    OSMesgQueue *unk84;   // used
    s32 *unk88;   // used
    s32 unk8C;    // used
    s32 unk90;
    s32 unk94;
    s8  unk98;
    s8  unk99;
    s16 unk9A;
    s32 unk9C;
    s16 unkA0;
    s16 unkA2;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
} struct21;

typedef struct {
    s32 unk0;
    s32 unk4;
    struct21 *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s16 unk1C;
    s16 unk1E;
} struct22;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} struct23;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s16 unk34;
    s8  unk36;
} struct24;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct28;

typedef struct struct27 struct27;

struct struct27 {
    s32 unk0;
    struct27 *unk4;
    s32 unk8;
} ;

typedef struct  struct25 struct25;
struct struct25 {
    struct25 *unk0;
    u16 unk4;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    f32 unk10;
    u8  unk14;
    s8  unk15;
    u8  unk16;
    u8  unk17;
    f32 unk18;
    u32 unk1C;
    u32 unk20;
    struct27 *unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 unk3B;
};

typedef struct {
    s32 *unk0;
    u16 unk4;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  unkB;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    u8  unkF;
    f32 unk10;
    u32 unk14;
    f32 unk18;
    u32 unk1C;
    u32 unk20;
    struct27 *unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u8  unk34;
    u8  unk35;
    u8  unk36;
    u8  unk37;
    u8  unk38;
    u8  unk39;
    u8  unk3A;
    u8  unk3B;
} struct29;

// size 0x44
typedef struct {
    s32 unk0;
    s32 unk4;
    u8  unk8;
    u8  unk9;
    u16 unkA;
    struct15 *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8  pad[0x28];
} struct30;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    s32 unk28;
    u32 unk2C;
    u16 unk30;
    u16 unk32;
    u8  unk34;
    u8  unk35;
    u8  unk36;
    u8  unk37;
    u16 unk38;
    u16 unk3A;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    struct25 *unk60;
    struct25 *unk64;
    s32 unk68;
    struct30 *unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
    f32 unk7C;
    f32 unk80;
    s32 unk84; // address of mesgQueue?
    s32 unk88;
    u8  unk8C;
    u8  unk8D;
} struct26;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct32;

typedef struct struct31 struct31;

struct struct31 {
    struct31 *unk0;     // used
    struct31 **unk4;    // used
    s32 unk8;
    s32 unkC;           // used
    s32 unk10;
    u8 pad[0x1C];
    f32 unk30;          // used
    s32 unk34;
    struct31** unk38;   // used
    s32 unk3C;          // used
    s32 unk40;          // used
    s32 unk44;
    s32 unk48;
    s16 unk4C;          // used
    s8  unk4E;          // used
    s16 unk50;
    s8  unk52;
    u8  unk53;          // used
    u8  unk54;          // used
};

// === 16 byte structs ===
typedef struct {
    s16 unk0;   // used
    u16 unk2;
    s32 unk4;   // used
    u8  unk8;   // used
    u8  unk9;   // used
    u8  unkA;   // used
    u8  unkB;
    u32 unkC;
} struct33;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    f32 unk4;   // used
    f32 unk8;   // used
    u32 unkC;
} struct34;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    s32 unk4;   // used
    u32 unk8;   // used
    u32 unkC;
} struct35;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    u8  unk4;   // used
    u8  unk5;   // used
    u8  unk6;   // used
    u32 unk7;   // used
    u8  unk8;
    u8  unk9;
    u8  unkA;
} struct38;

typedef struct {
    s16 unk0;   // used
    s16 unk2;
    s16 unk4;   // used
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
} struct39;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    f32 unkC;
} struct40;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
    s32 unk10;
} struct41;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14; // used
    s32 unk18; // used
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30; // used
    s32 unk34; // used
    s32 unk38;
    s32 unk3C;
    s32 unk40; // used
    s32 unk44; // used
    s32 unk48; // used
    f32 unk4C; // used
    s32 unk50; // used
    f32 unk54; // used
    s32 unk58; // used
    s32 unk5C; // used
    u16 unk60; // used
    u16 unk62; // used
    u16 unk64; // used
    u16 unk66; // used
    u16 unk68; // used
    u16 unk6A; // used
    u16 unk6C; // used
    u16 unk6E; // used
    u16 unk70; // used
    u16 unk72;
    u16 unk74;
    u16 unk76; // used
    s32 unk78; // used
    s32 unk7C; // used
    s32 unk80; // used
    s32 unk84; // used
    s32 unk88; // used
    s32 unk8C; // used
    s32 unk90;
    s32 unk94;
    u8  unk98;
    u8  unk99; // used
    u16 unk9A;
    s32 unk9C;
    u16 unkA0; // used
    u16 unkA2; // used
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 *unkB8; // used
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8; // used
    s32 unkCC; // used
} struct42;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
} struct43;

typedef struct {
    s16 unk0;   // used
    s16 unk2;   // used
    s16 unk4;   // used
    s16 unk6;
    s32 unk8;   // used
} struct44;

typedef struct {
    s32 unk0;   // used
    s32 unk4;   // used
    u16 unk8;   // used
    s16 unkA;   // used
    f32 unkC;   // used
    s16 unk10;  // used
    u8  unk12;  // used
    u8  unk13;  // used
    u8  unk14;  // used
    u8  unk15;  // used
    u16 unk16;
    f32 unk18;  // used
    s32 unk1C;  // used
    s32 unk20;  // used
} struct45;

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
} struct46;

typedef struct {
    s16 unk0;   // used
    s16 unk2;   // used
    s32 unk4;
    s16 unk8;   // used
    s16 unkA;   // used
    u16 unkC;   // used
    s16 unkE;
    s32 unk10;
    s32 unk14;
    s16 unk18;  // used
    s16 unk1A;  // used
} struct47;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 pad1[0x1b];
    u8 unk3B;
    u8 pad0[0x4F];
    u16 unk8C;
    u16 unk8E;
    u8 pad2[0x288];
    s32 unk318;
} struct48;

typedef struct {
    s16 unk0;
    s8 unk2;
    s8 unk3;
} struct49;

typedef struct {
    s32 unk0;   // used
    s32 unk4;   // used
    s16 unk8;   // used
    s16 unkA;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;  // used
    s32 unk20;  // used
    s32 unk24;
    s32 unk28;  // used
    s32 unk2C;  // used
    s32 unk30;  // used
    s32 unk34;  // used
    s32 unk38;  // used
    s32 unk3C;
    s32 unk40;  // used
    s32 unk44;  // used
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;  // used
    s32 unk5C;  // used
    s32 unk60;  // used
    s32 unk64;  // used
    s32 unk68;  // used
    s32 unk6C;  // used
    s32 unk70;  // used
} struct50;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
} struct51;

typedef struct {
    s32 unk0;
    f32 unk4;
} struct52;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} struct53; // used as OSMesg

typedef struct struct54 struct54;

struct struct54 {
    struct54 *unk0;   // used
    struct54 *unk4;
    u32 unk8;   // used
    s32 unkC;   // used
    s32 unk10;
    s8 unk14;   // used
    u8 unk15;   // used
    u8 unk16;   // used
};

typedef struct {
    s16 unk0;
    s16 unk2; // used
    s32 unk4;
    s32 unk8;
    u8 pad[0x1C];
    s32 unk28; // used
    s32 *unk2C; // used
} struct55;

typedef struct struct56 struct56;

struct struct56 {
    s32 unk0;
    s32 unk4;
    struct56 *unk8;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;  // used
} struct57;

typedef struct { // size 0x44
  u32 pad0[3];
  s32 unkC;               // used
  void *framebuffer;      // framebuffer
  s32 unk14;
  s32 unk18;
  u32 pad1[0xF];
  OSMesgQueue *mesgQueue; // used
  OSMesg *mesg;           // used
} struct58;


/* chunk 0 */

typedef struct {
  f32 x;
  f32 y;
  f32 z;
} vertex;

typedef struct {
  u8 unk0;
  u8 unk1;
  u8 unk2;
} struct100;

typedef struct {
  s32 unk0;
  f32 unk4;
  f32 unk8;
} struct101;

typedef struct {
  u8  unk0;
  u8  unk1;   // used
  u8  unk2;
  u8  unk3;
  u8  unk4;
  u8  unk5;
  u8  unk6;
  u8  unk7;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  u8  unk18;  // used
} struct102;

typedef struct {
  u16 unk0;
  u8  unk2;
  u8  unk3;   // used?
  u16 unk4;   // used
  u16 unk6;
  u16 unk8;
  u16 unkA;
  u16 unkC;   // used
  s32 unkE;   // used
} struct103;

typedef struct {
    s32 unk0;  // used
    s32 unk4;  // used
    s32 unk8;  // used
    s16 unkC;
    u8  unkE;
    u8  unkF;
    s16 unk10;
    u8  unk12; // used
    u8  unk13;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    s16 unk1A;
} struct104;

typedef struct {
    s32 unk0;  // used
    s32 unk4;  // used
    s32 unk8;  // used
    s32 unkC;  // used
} struct105;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s8  pad[0x3];
    u8  unkF;
} struct106;

typedef struct {
    s8 pad0[0x1C];
    s32 unk1C;
    s8 pad1[0x8];
    s32 unk28;
    s8 pad2[0x78];
} struct107;

typedef struct {
    u8  pad00[0x2C];
    s32 unk2C;       // used
    u8  pad01[0x54];
    s32 unk84;       // used
    u8  pad10[0xaC];
    s32 unk134;      // used
    u8  pad11[0x54];
    f32 unk18C;      // used
    f32 unk190;      // used
    u8  pad12[0x20];
    s16 unk1B4;      // used
    u8  pad20[0x2A];
    u16 unk1E0;      // used
    u8  pad30[0x5A];
    u8  unk23C;
    u8  pad31[0x10b];
    f32 unk348;      // used
    f32 unk34C;      // used
    u8  pad40[0x24];
    f32 unk374;      // used
    u8  pad50[0x276];
    s32 unk5F0;      // used
    u8  pad60[0x148];
    u16 unk73C;
} struct108;

typedef struct {
    u8  pad[0x18]; // help me
    f32 unk20;
    f32 unk24;
    s16 unk28;
    u16 unk2A;
    s16 unk2C;
    s16 unk2E;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54; //?
    f32 unk58;
    f32 unk5C;
    u16 unk60;
    u16 unk62;
    f32 unk64;
    f32 unk68;
    u16 unk6C;
    u16 unk6E;
    s32 unk70;
    s32 unk74;
} struct109;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    f32 unk6;
    s16 unkA;
    s16 unkC;
    u16 unkE;
    s32 unk10;
    s16 unk14;
    u8  unk16;
    s32 unk17;
    s32  unk1B;
} struct110;

typedef struct {
    u8 pad[0x18];
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} struct111;

typedef struct {
    f32 unk0;   // used
    f32 unk4;   // used
    f32 unk8;   // used
    f32 unkC;
    f32 unk10;  // used
    f32 unk14;  // used
    f32 unk18;  // used
    f32 unk1C;
    f32 unk20;  // used
    f32 unk24;  // used
    f32 unk28;  // used
    f32 unk2C;
    f32 unk30;  // used
    f32 unk34;  // used
    f32 unk38;  // used
    f32 unk3C;
} struct112;

typedef struct {
    u8 pad0[0x18];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    u8 pad1[0x18];
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    s16 unk3E;
} struct113;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;  // used
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s16 unk28;
    s16 unk2A;  // used
    s32 unk2C;
    s32 unk30;
    s16 unk34;  // used
    s16 unk36;  // used
    s16 unk38;
    s8  unk3A;  // used
} struct114;

typedef struct {
    void (*unk0)(struct102 *arg0); // used
    u8 pad0[0x14];
    void (*unk18)(struct102 *arg0); // used
    u8 pad1[0x18];
} struct115;

typedef struct {
    u8 pad[0x18];
} struct116;

typedef struct {
    u8 pad[0x20];
} struct117; // used as OSMesg

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[0x100];
    s32 unk118;
    s32 unk11C;
    s32 unk120;
    s32 unk124;
} struct118;

typedef struct struct119 struct119;

struct struct119 {
    u8 pad0[0x170];
    struct119 *unk170;
};

typedef struct {
    u16 unk0;       // used
    u16 unk2;
    s32 unk4;
    struct31 *unk8; // used
} struct120;

typedef struct {
    s16 unk0;
    u8  unk2;
    u8  unk3;
    s32 unk4;
    s32 unk8;
    s32 unkC[8];
} struct121;

typedef struct {
    s32 unk0;
} struct123;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4[8];
} struct122;

typedef struct struct124 struct124;

struct INTS {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct FLOAT {
    f32 unk0;
};

struct struct124 {
    struct124* unk0;
    u8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s16 unk20;
    u16 unk22;
    u16 unk24;
    s16 unk26;
    union {
        struct INTS i;
        struct FLOAT f;
    } data;
};

typedef struct {
    s16 unk0;
    s16 unk2;       // used
    s32 unk4;
    s16 unk8[0x10]; // used
    s32 unk28;      // used
} struct125;

#endif
