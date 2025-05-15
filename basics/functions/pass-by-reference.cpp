#include <iostream>
using namespace std;

void num(int &x){
    x = 8;
}
int main(){
    int a =5;
    num(a);
    cout<<a<<endl; // 8

    return 0;
}