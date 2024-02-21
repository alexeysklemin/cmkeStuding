#include <iostream>
#include <string>
#include <fstream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"



int main(){
    
	int command;
    
    int ram[8] = {0,0,0,0,0,0,0,0};


while(true){
    std::cout<<"\t\t 1. display memory\n";
    std::cout<<"\t\t 2. calculate memory\n";
    std::cout<<"\t\t 3. read memory\n";
    std::cout<<"\t\t 4. write memory\n";
    std::cout<<"\t\t 5. save memory to disk\n";
    std::cout<<"\t\t 6. load memory from disk\n";
    std::cout<<"\t\t 7. exit program\n";
    std::cout<<"\n";
    
	std::cout<<"What is your command now? ";
	std::cin>>command;

	switch (command) {

		case 7:
		break;

		case 1:
		display(ram);

		/*case "input":
		input();*/

		case 2:
		sum(ram);

		case 5:
		save(ram);

		case 6:
		load(ram);

		case 4:
        int adrs;
        int val;
        std::cout<<"What address are you interested? ";
        std::cin>>adrs;
        std::cout<<"What value are you have? ";
        std::cin>>val;
		write(adrs, val);

		case 3:
        std::cout<<"What adress are you interestef? ";
        int adrss;
        std::cin>>adrss;
        read(adrss);
	}
}

    return 0;
}
