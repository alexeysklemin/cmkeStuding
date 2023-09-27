#include "cpu.h"
#include "ram.h"

void display(){
	char command;
	
	std::cout<<"What do you want to eatch array (A) or summ (S)?\n";
	std::cin command;
	
	switch command{
		
		case 'S':
		std::cout<<sum(&ram)<<std::endl;
		
		case 'A':
		
		for(int i=0; i<8; ++i){
			std::cout<<ram[i]<<"\t";
			}
			std::cout<<std::endl;
}
