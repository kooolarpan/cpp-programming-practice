// Ambiguity Error

#include <iostream>
using namespace std;

class Apple {
   public:
    void fun() { cout << "Function from class Apple" << endl; }
};

class Ball {
   public:
    void fun() { cout << "Function from class Ball" << endl; }
};

class Cat : public Apple, public Ball {};

int main() {
    Cat c;
    // c.fun(); // Leads to ambiguity error
    c.Apple::fun();  // Calls fun() of class Apple
    c.Ball::fun();   // Calls fun() of class Ball
    return 0;
}  