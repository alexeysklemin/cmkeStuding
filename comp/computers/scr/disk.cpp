//#include "ram.h"
#include "kbd.h"
#include "disk.h"
void save (int ram[8]){
	
	std::ofstream disk;
	disk.open("data.txt");
	if(!disk){
		std::cout<<"file not found"<<std::endl;
		
	}else{
		while(!disk.eof()){
			for(int i=0; i<8; ++i){
				disk << ram[i]<< std::endl;
				}
			}
			disk.close();	
	}
}

void load (int ram[8]){

	std::ifstream disk;
	//unsigned 
	int mem;
	disk.open("data.txt");
	if(!disk){
		std::cout<<"The RAM is empty"<<std::endl;
		}else{
			while(disk){
                disk>>mem;
                //std::getline(disk, mem);
				std::cout<<mem<<std::endl;
				}
			} 
			disk.close();
}
