#include <iostream>

namespace hero{
    void fly(){
       std:: cout<<"I am a hero"<<std::endl;
    }
}
namespace gunda{
    void fly(){
        std::cout<<"I am a gunda"<<std::endl;
    }
}

int main(){
    hero::fly();
    gunda::fly();
    return 0;
}