// Ambiguity in Hybrid Inheritance

#include <iostream>
using namespace std;

class A {
   public:
    void fun() { cout << "Yoyo" << endl; }
};

class B : virtual public A {};  // use virtual for top parent class
class C : virtual public A {};  // use virtual for top parent class
class D : public B, public C {};

int main() {
    D d;
    d.fun(); // ambiguity error without virtual

    return 0;
}
