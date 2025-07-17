// Binary Addition using friend function

#include <iostream>
using namespace std;

class Parent{
    int num;
    public:
    void get(){
        cout <<"Enter number: ";
        cin >> num;
    }
    void display(){
        cout << "Num: "<<num<<endl;
    }
    
    friend void operator+(Parent &a, Parent &b);
};

void operator+(Parent &a, Parent &b){
    a.num = a.num + b.num;
}

int main(){
    Parent a,b;
    a.get();
    b.get();
    a+b;
    a.display();
    return 0;
}