#include <iostream>
#include <string>
#include <fstream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"



int main(){
    
	std::string command;

while(true){

	std::cout<<"What is your command now? ";
	std::cin>>command;

	switch command{

		case "exit":
		break;

		case "display":
		display();

		case "input":
		input();

		case "sum":
		sum();

		case "save":
		save();

		case "load":
		load();

		case "write":
		write();

		case "read":
		read();
	}
}

    return 0;
}
