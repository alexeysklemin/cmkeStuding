#include "cpu.h"
#include "ram.h"

void display(int &ram[8]){
	char command;
	
	std::cout<<"What do you want to watch array (A) or summ (S)?\n";
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
