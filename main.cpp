/*формате double с координатами X и Y соответственно.

Команда scalpel — принимает на вход две двумерные координаты начала и конца разреза или линии отсечения. При выполнении в консоль выводится сообщение о том, что был сделан разрез между введёнными координатами.

Команда hemostat принимает на вход одну точку, в которой требуется сделать зажим, о чём также сообщает в консоль.

Команда tweezers — пинцет, как и зажим, принимает одну точку для применения. Сообщение об этом выводится в консоль.

Команда suture — хирургическая игла*/


#include <iostream>
#include <string>

void scalpel (double X, double Y);
void hemorstat(double X);
void tweezers(double X);
void suture (double X, double Y);

int main()
{
    double X, Y;
    std::string command;
    std::cout << "Input your command ";
    std::cin>>command;
    if(command=="scalpel"){
        std::cout<<"Input your coordinats ";
        std::cin>>X>>Y;
        scalpel(X,Y);
    }
    if(command=="suture"){
        std::cout<<"Input your coordinats ";
        std::cin>>X>>Y;
        suture(X,Y);
    }
    if(command=="hemorstat"){
        std::cout<<"Enter your coordinate ";
        std::cin>>X;
        hemorstat(X);
    }
    if(command=="tweezer"){
        std::cout<<"Enter your coordinate ";
        std::cin>>X;
        tweezers(X);
    }
    return 0;
}

void scalpel (double X, double Y){
    std::cout<<"scalpele should make catting between "<<X<<" and "<<Y<<std::endl;
}

void suture(double X, double Y){
    std::cout<<"suture must make stitch between "<<X<<" and "<<Y<<std::endl;
}

void hemorstat(double X){
    std::cout<<"hermostat makes jaw in "<<X<<std::endl;
}

void tweezers(double X){
    std::cout<<"tweezer makes jaaw in "<<X<<std::endl;
}
