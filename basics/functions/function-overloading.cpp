#include <iostream>
using namespace std;

void functionOverloading(int firstNumber, int secondNumber){
    cout<<"Sum: "<<firstNumber+secondNumber<<endl;
}

void functionOverloading(int number){
    cout<<"Prints Number: "<<number<<endl;
}

void functionOverloading(string name){
    cout<<"Prints Character: "<<name<<endl;
}

int main(){
    functionOverloading(2,5);
    functionOverloading(6);
    functionOverloading("Arpan");
    return 0;
}