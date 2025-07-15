// WAP to create a class named height with data members meter(int) and centimeter(int).
// Overload the binary + operator using friend function to add two heights.

#include <iostream>
using namespace std;

class Height {
    int meter, centimeter;

   public:
    Height() {
        meter = 0;
        centimeter = 0;
    }
    void get() {
        cout << "Enter meter: ";
        cin >> meter;
        cout << "Enter centimeter: ";
        cin >> centimeter;
    }
    void display() {
        cout << meter << " Meter and " << centimeter << " Centimeter" << endl;
    }
    friend Height operator+(Height &h1, Height &h2);
};

Height operator+(Height &h1, Height &h2) {
    Height temp;
    temp.centimeter = h1.centimeter + h2.centimeter;
    temp.meter = h1.meter + h2.meter;

    if (temp.centimeter >= 100) {
        temp.meter += temp.centimeter / 100;
        temp.centimeter %= 100;
    }

    return temp;
}

int main() {
    Height h1, h2, result;
    h1.get();
    h2.get();
    result = h1 + h2;
    result.display();
    return 0;
}