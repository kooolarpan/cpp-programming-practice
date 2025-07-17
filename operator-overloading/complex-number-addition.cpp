// WAP to add two complex number using + operator overloading

#include <iostream>
using namespace std;

class ComplexNumber {
   float real, imag;
   public:
    ComplexNumber(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
    }

    ComplexNumber operator+(ComplexNumber c) {
        ComplexNumber temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    ComplexNumber c1(3.5, 2.5);  // 3.5 + 2.5i
    ComplexNumber c2(1.2, 4.3);  // 1.2 + 4.3i

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    ComplexNumber c3 = c1 + c2;  // Use overloaded + operator

    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}