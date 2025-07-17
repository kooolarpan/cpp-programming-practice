#include <iostream>
using namespace std;

class Parent{
    int num;
    public:
  Parent(){
        cout << "Enter a number: ";
        cin >> num;
    }
    void display(){
        cout<<"Number: "<<num<<endl;
    }
    void operator+=(Parent b){
        num +=b.num;
    }
};

int main(){
    Parent a,b;
    a+=b;
    a.display();
    return 0;
}