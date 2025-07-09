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
    void operator==(Parent b){
        if(num == b.num){
            cout << "The numbers are equal!"<<endl;
        }else{
            cout << "The numbers are not equal!"<<endl;
        }
    }
};

int main(){
    Parent a,b;
    a==b;
    return 0;
}