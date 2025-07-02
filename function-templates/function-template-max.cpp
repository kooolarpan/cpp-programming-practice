/*
 WAP to find a max of two integers, floating point numbers and characters
 using template function
*/

#include <iostream>
using namespace std;

template <class Ninja>
void data(Ninja a, Ninja b) {
    if (a > b) {
        cout << a << " is max" << endl;
    } else if (a < b) {
        cout << b << " is max" << endl;
    } else {
        cout << a << " and" << b << " are same" << endl;
    }
}

int main() {
    data(5, 8);
    data(2.9, 3.6);
    data('a', 'e');
    return 0;
}