#ifndef OPCODES_H
#define OPCODES_H


//Misc, control 
#define NOP;
#define HLT;
#define DI;
#define OUT;
#define IN;
#define EI;

// JUMP
#define RNZ, RNC, RPO, RP;
#define JNZ, JNC, JPO, JP, JMP;
#define CNZ, CNC, CPO, CP;
#define RST, 
#define RZ, RC, RPE, RM;
#define RET, RET, PCHL;  // why 2?
#define JZ, JC, JPE, JM;
#define JMP; // 2 again?
#define CZ, CC, CPE, CM;
#define CALL; // 4 times?
#define RST; // 4 times again?

// 8bit load, store, move
#define STAX;
#define STA;
#define MVI;
#define LDAX;
#define LDA;
#define MVI;
#define MOV;

//16bit load, store, move
#define LXI;
#define SHLD;
#define LHLD;
#define POP;
#define PUSH;
#define XTHL;
#define SPHL;
#define XCHG;

// 8-bit logic
#define INR;
#define DCR;
#define RLC, RAL, DAA, STC;
#define INR;
#define DCR;
#define RRC, RAR, CMA, CMC;
#define ADD, ADC;
#define SUB, SBB;
#define ANA, XRA;
#define ORA, CMP;
#define ADI, SUI, ANI, ORI;
#define ACI, SBI, XRI, CPI;

// 16-bit logic
#define INX;
#define DAD;
#define DCX;



#endif