#include <iostream>
using namespace std;

/***
Types of Constructor:
1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor
***/

class Ninja {
    int power;

   public:
    Ninja() { power = 10; }                           // Default
    Ninja(int p) { power = p; }                       // Parameterized
    Ninja(int p, int q) { power = p + q; }            // Parameterized
    Ninja(Ninja &hattori) { power = hattori.power; }  // Copy Constructor
    void display() { cout << "Power: " << power << endl; }
};

int main() {
    Ninja n1, n2(20), n3(2, 6);
    n1.display();
    n2.display();
    n3.display();
    Ninja n4(n2);  // Calls default copy constructor
    n4.display();
    Ninja n5(n3);
    n5.display();
    return 0;
}