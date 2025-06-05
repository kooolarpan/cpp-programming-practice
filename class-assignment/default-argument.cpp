/*

Write a program to display N number of characters by using default arguments for
both parameters. Assume that the function takes two arguments, one character to
be printed and other how many times the character to be printed respectively.

*/

#include <iostream>
using namespace std;

void func(char a = 'z', int b = 0) {
    for (int i = 0; i < b; i++) {
        cout << a << endl;
    }
}
int main() {
    char a;
    int b;
    cout << "Enter a character: ";
    cin >> a;
    cout << "Enter the times you want to print: ";
    cin >> b;

    func(a, b);
    return 0;
}