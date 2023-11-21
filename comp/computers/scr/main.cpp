#include <iostream>
#include <string>
#include <fstream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"



int main(){
    
	char* command;

while(true){

	std::cout<<"What is your command now? ";
	std::cin>>command;

	switch (command) {

		case "exit":
		break;

		case "display":
		display(ram);

		case "input":
		input();

		case "sum":
		sum(ram);

		case "save":
		save(ram);

		case "load":
		load(ram);

		case "write":
        int addrs=0;
        int val=0;
        std::cout<<"What address are you interested? ";
        std::cin>>addrs;
        std::cout<<"What value are you have? ";
        std::cin>>val;
		write(addrs, val);

		case "read":
        std::cout<<"What adress are you interestef? ";
        int adrss;
        std::cin>>adrs;
        read(adrss);
	}
}

    return 0;
}
