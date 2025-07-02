#include <iostream>
using namespace std;

class Parent{
    public:
    // Virtual Function
    virtual void fun(){
        cout << "Parent"<<endl;
    }
};

class Child: public Parent{
    public:
    void fun(){
        cout << "Child"<<endl;
    }
};

int main(){
    Parent *p;
    Child c;

    p = &c;
    p -> fun();
    return 0;
}