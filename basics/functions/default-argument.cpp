#include <iostream>
using namespace std;
void numbers(int firstNumber, int secondNumber = 1, int thirdNumber = 2) {
    cout << "Sum: "<<firstNumber + secondNumber + thirdNumber << endl;
}

int main() {
    numbers(2);
    numbers(2, 5);
    numbers(2, 5, 8);
    return 0;
}