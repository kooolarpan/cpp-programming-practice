#include <iostream>
using namespace std;

class Parent{
    int num;
    public:
    Parent(){
        cout << "Enter a numher: ";
        cin >> num;
    }
    void display(){
        cout<<"Number: "<<num<<endl;
    }
    void operator<(Parent b){
        if(num<b.num){
            cout << "Smallest: "<<num<<endl;
        }
        else{
            cout << "Smallest: "<<b.num<<endl;
        }
    }
};

int main(){
    Parent a,b;
    a<b;
    return 0;
}