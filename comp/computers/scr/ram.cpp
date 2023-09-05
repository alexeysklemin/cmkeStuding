#include "ram.h"
#include "kbd.h"

int ram[8] = {0,0,0,0,0,0,0,0};


void write (int address, int value){
	ram[address] = value;
}

int read (int address){

	return ram[address];
}
