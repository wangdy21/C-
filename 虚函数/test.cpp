#include<iostream>

class Base{
public:
     Base(){

     }
     virtual ~Base(){
        std::cout<<"Base" << std::endl;
     }
};

class Derived:public Base {
public:
     Derived(){

     }
     ~Derived(){
        std::cout<<"Derived" << std::endl;
     }
};

int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}