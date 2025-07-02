// Template Function -> handles any type of data

#include <iostream>
using namespace std;

template <class Ninja>
void hattori(Ninja a, Ninja b) {
    cout << a << " " << b << endl;
}

int main() {
    hattori(5, 2);
    hattori(4.5, 2.6);
    hattori('a', 'v');
    hattori("Ninja", "Hattori");
    return 0;
}