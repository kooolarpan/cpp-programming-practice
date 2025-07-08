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
        cout<<"Num: "<<num<<endl;
    }
    void operator-(){
        num=-num;
    }
};

int main(){
    Parent a;
    a.get();
    a.display();
    -a;
    a.display();
    return 0;
}