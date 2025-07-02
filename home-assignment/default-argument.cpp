#include <iostream>
using namespace std;

void defaultArg(int d = 5){
    cout << d << endl;
}

int main(){
    defaultArg();
    return 0;
}