#include "cpu.h"

int sum(int &ram[8]){
    int sum=0;
    for(int i=0; i<8; ++i){
    	sum=sum+ram[i];
    	}
    return sum;
}
