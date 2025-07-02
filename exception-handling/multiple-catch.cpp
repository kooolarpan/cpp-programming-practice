#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number other than 1,2,3: ";
    cin >> a;
    try {
        if (a == 1) {
            throw a;
        } else if (a == 2) {
            throw float(a);
        } else if (a == 3) {
            throw char(a);
        } else {
            cout << "Valid number entered!" << endl;
        }
    } catch (int e) {
        cout << "Integer exception detected!" << endl;
    } catch (float e) {
        cout << "Float exception detected!" << endl;
    } catch (char e) {
        cout << "Character exception detected!" << endl;
    }
    return 0;
}