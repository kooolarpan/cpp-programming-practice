#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw b;
        } else {
            cout << a / b << endl;
        }
    } catch (int e) {
        cout << "Divided by " << e << " exception detected." << endl;
    }
    cout <<"First Function"<<endl;
    cout <<"Second Function";
    return 0;
}