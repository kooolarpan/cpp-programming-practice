// WAP to add two integers and two floating point numbers using template function

#include <iostream>
using namespace std;

template <class Ninja>
void sum(Ninja a, Ninja b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    sum(5, 8);
    sum(2.9, 3.6);
    return 0;
}