// Function Overriding

#include <iostream>
using namespace std;

class Parent {
   public:
    void fun() { cout << "Parent Class's Function" << endl; }
};

class Child : public Parent {
   public:
    void fun() { cout << "Child Class's Function" << endl; }
};

int main() {
    Child a;
    a.fun();  // it will execute the fun() of child class
              // due to function overriding
    return 0;
}