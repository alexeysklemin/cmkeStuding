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
        
        for(int i=0; i<name.length(); ++i){
            if(name[i]>='0' and name[i]<=9){
            std::cout<<"Incorrect datas. Repeat please"<<"\n";
            }else continue
        }
    
        std::cout<<"Input phone number of new contact"<<"\n";
        std::cin>>phone;
        
        if(phone.length()<10 || phone.length()>10) && (phone[0]!='8' || (phone[0]!='+' && phone[1]!='7'){
            std::cout<<"Incorrect datas. Repeat please"<<"\n";
        }else continue
    }
    
    
    }
	void call(std::map<std::string, std::string> phoneBook){
	std:: string name;
	
	}

	void sms(std::map<std::string, std::string> phoneBook){
	
	}
};
