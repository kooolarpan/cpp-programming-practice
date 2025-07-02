// WAP to create a class and init the object and write the array for it

#include <iostream>
using namespace std;

class createObjects{
    public:
    int num; 
};

int main(){
    createObjects n[10];
    cout << "Enter a number: ";
    for (int i = 0; i < 10; i++){
        cin >> n[i].num ;
    }
    cout << "Displaying numbers: ";
    for (int i = 0; i < 10; i++){
        cout << n[i].num<<endl ;
    }
    return 0;
    
}