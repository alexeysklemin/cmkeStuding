#include "phone.h"

class Phone{

	std::map<std::string, std::string> phoneBook

public:
	
	void  add (std::map<std::string, std::string> phoneBook){
	std::string name;
    std::string phone;
    
    while(true){
    
        std::cout<<"Imput name of contact to your phone book"<<"\n";
        std::cin>>name;
        bool incorrectName=false;
        
        for(int i=0; i<name.length(); ++i){
            if(name[i]>='0' and name[i]<=9){
            std::cout<<"Incorrect datas. Repeat please"<<"\n";
            incorrectName=true;
            break;
        }
        if(incorrectName){
            continue;
        }
        }
        std::cout<<"Input phone number of new contact"<<"\n";
        std::cin>>phone;
        
        if(phone.length()<10 || phone.length()>10) && (phone[0]!='8' || (phone[0]!='+' && phone[1]!='7'){
            std::cout<<"Incorrect datas. Repeat please"<<"\n";
            breake;
    }
    
    if(phoneBook.find(name)!=phoneBook.end()){
            std::cout<<"There is the same Name\n";
            break;
    }else{
        phoneBook.insert(std::make_pair(name, phone))
        break;
    }
    
    }
	
	void call(std::string> phoneBook){
	
    if(phoneBook.find(name)!=phoneBook.end()){
        std::<<"Calling number: "<<phoneBook[name]<<std::endl;
	}else{
        std::cout<<"Contact wasn't found"<<std::endl;
    }
}

	void sms(std::string name, std::string message){
        
        if(phoneBook.find(name)!=phoneBook.end()){
        std::<<"Sending message "<<message<<" "<<phoneBook[name]<<std::endl;
	}else{
        std::cout<<"Contact wasn't found"<<std::endl;
    }
        
        
        
	
	}
};
