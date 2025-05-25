// WAP to ask users to enter any 5 numbers and sum them using dma

#include <iostream>
using namespace std;

int main() {
    int *a, *sum;
    a = new int[5];
    sum = new int;
    cout << "Enter any 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        *sum = *sum + *(a + i);
    }
    cout << "Sum: " << *sum << endl;
    delete a;
    return 0;
}
