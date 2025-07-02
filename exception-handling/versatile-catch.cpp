#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    try {
        if (num == 1) {
            throw num;
        } else if (num == 2) {
            throw char(num);
        } else {
            cout << "Else Block" << endl;
        }
    } catch (...) {
        cout << "Versatile Catch!" << endl;
    }
    return 0;
}