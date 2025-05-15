#include <iostream>
using namespace std;

void num(int *x){
    *x = 10;
}
int main(){
    int a =5;
    num(&a);
    cout<<a<<endl; // 10

    return 0;
}