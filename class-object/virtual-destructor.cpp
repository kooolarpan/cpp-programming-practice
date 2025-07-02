#include <iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout << "Constructor of Parent"<<endl;
    }
    virtual ~Parent(){
        cout << "Destructor of Parent"<<endl;
    }
};
class Child : public Parent{
    public:
    Child(){
        cout << "Constructor of Child"<<endl;
    }
    ~Child(){
        cout << "Destructor of Child"<<endl;
    }
};

int main(){
    Parent *p;
    p = new Child();
    delete p;
    return 0;
}