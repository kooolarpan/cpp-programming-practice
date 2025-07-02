#include <iostream>
using namespace std;

class Parent{
    int *ptr;
    public:
    // Dynamic Constructor
    Parent(){
        ptr = new int;
        cout << "Memory allocated!"<<endl;
    }
    // Dynamic Destructor
    ~Parent(){
        delete ptr;
        cout << "Memory released!"<<endl;
    }
};

int main(){
    Parent p;
    return 0;
}