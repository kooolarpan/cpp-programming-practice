/*
 WAP to interchange value of two integers, floating point numbers and characters
 using template function
*/

#include <iostream>
using namespace std;

template <class Ninja>
void data(Ninja a, Ninja b) {
    cout << "Before Swapping: " << a << "\t" << b << endl;
    Ninja temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping: " << a << "\t" << b << endl;
}

int main() {
    data(5, 8);
    data(2.9, 3.6);
    data('a', 'e');
    return 0;
}