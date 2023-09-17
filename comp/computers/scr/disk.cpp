#include <fstream>
#include "ram.h"
#include "kbd.h"




void save (int address, int value){
	
	std::ofstream disk;
	disk.open("diskspace.txt");
	if(!disk){
	
	}else{
		while(!disk.eof()){
			for(int i=0; i<8; ++i){
				disk << ram[i]<< std::endl;
				}
			}
			disk.close();	
	}
}

void load (int address){

	std::ifstream disk;
	unsigned int mem;
	disk.open("diskspace.txt");
	if(!disk){
		std::cout<<"The RAM is empty"<<std::endl;
		}else{
			while(std::getline(disk, mem)){
			
				std::cout<<mem<<std::endl;
				}
			} 
			disk.close();
}
