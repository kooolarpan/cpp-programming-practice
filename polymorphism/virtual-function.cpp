#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void display(){
        cout << "Parent"<<endl;
    }
};

class firstSibling:public Parent{
    public:
     void display(){
        cout << "First Sibling"<<endl;
    }
};

class secondSibling:public Parent{
    public:
     void display(){
        cout << "Second Sibling"<<endl;
    }
};

void displayData(Parent *p){
    p -> display();
}   

int main(){
    firstSibling f;
    secondSibling s;
    displayData(&f);
    displayData(&s);
    return 0;
}