#include <iostream>
using namespace std;
void numbers(int a, int b=1, int c=2){
    cout<<a+b+c<<endl;
}

int main(){
    numbers(2);
    numbers(2,5);
    numbers(2,5,8);
    return 0;
}