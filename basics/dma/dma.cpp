// Dynamic Memory Allocation

#include <iostream>
using namespace std;

int main(){
    int *p;
    // p = (int*)malloc(1*sizeof(int)); used in C Programming
    p = new int; // CPP - 4 bytes memory is allocated dynamically
    delete p; // frees memory, de-allocation
    return 0;
}