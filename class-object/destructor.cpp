/*

Destructor:

Special type of member function that will be automatically called
name same as class name
public section
no return type

Differences:
1. Called When an object is destroyed
2. When the life of object ends
3. Doesn't accept arguments
4. Only one destructor in a class
5. No destructor overloading
6. user tilde (~) sign before destructor

General Use:
Free up memory, resources

*/

#include <iostream>
using namespace std;

class Ninja {
    int *p;

   public:
    Ninja() {
        p = new int;
        cout << "Memory Allocated!" << endl;
    }
    ~Ninja() {
        delete p;
        cout << "Memory Released!" << endl;
    }
};

int main() {
    Ninja a;
    return 0;
}