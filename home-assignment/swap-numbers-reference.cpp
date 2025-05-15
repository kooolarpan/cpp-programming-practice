// WAP to swap two numbers using reference variable

#include <iostream>
void swapNumbers(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    swapNumbers(a, b);
    std::cout << "\nSwapping two values: " << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}