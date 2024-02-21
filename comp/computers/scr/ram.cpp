#include "ram.h"
//#include "kbd.h"

//ram[8] = {0,0,0,0,0,0,0,0};


void write (int address, int value){
//	input();
	ram[address] = value;
}

int read (int address){

	return ram[address];
}
