#include <iostream>
using namespace std;

class Parent{
    int num;
    public:
    void get(){
        cout << "Enter a number: ";
        cin >> num;
    }
    void display(){
        cout << "Number: "<<num<<endl;
    }

    friend void operator++ (Parent &a);
};

void operator++ (Parent &a){
    ++a.num;
}

int main(){
    Parent a;
    a.get();
    ++a;
    a.display();
    return 0;
}