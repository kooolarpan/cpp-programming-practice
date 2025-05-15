#include <iostream>
using namespace std;

int main(){
    int a =5;
    int &b=a; // b is a reference variable
    
    cout<<a<<endl; // 5
    cout<<b<<endl; // 5

    a=10;
    cout<<a<<endl; // 10
    cout<<b<<endl; // 10

    b=2;
    cout<<a<<endl; // 2
    cout<<b<<endl; // 2

    return 0;
}