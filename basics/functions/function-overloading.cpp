#include <iostream>
using namespace std;
void number(int a, int b){
    cout<<a+b<<endl;
}
void number(int a){
    cout<<a<<endl;
}
void number(char a){
    cout<<a<<endl;
}

int main(){
    number(2,5);
    number(6);
    number('A');
    return 0;
}