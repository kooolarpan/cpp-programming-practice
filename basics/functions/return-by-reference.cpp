#include <iostream>
using namespace std;

int a = 5;

int& func(){
    return a;
}

int main(){
    cout<<a<<endl; // prints 5
    a = func();
    func()=24;
    cout<<a<<endl; // prints 24
    return 0;
}