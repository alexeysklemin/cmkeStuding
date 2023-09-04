#include "ram.h"
#include "kbd.h"

int ram[8] = {0,0,0,0,0,0,0,0};


void write (int ram[8]){
input();
}

void read (int ram[8]){

	for(int i=0; i<8; ++i ){
		std::cout<<ram[i]<<"\t";
	}
}
