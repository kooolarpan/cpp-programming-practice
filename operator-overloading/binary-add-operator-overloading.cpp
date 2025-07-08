#include <iostream>
using namespace std;

class Apple{
    int num;
    public:
    void get(){
        cout <<"Enter number: ";
        cin >> num;
    }
    void display(){
        cout << "Num: "<<num<<endl;
    }
    void operator+(Apple b){
        num = num+b.num;
    }
};

int main(){
    Apple a,b;
    a.get();
    b.get();
    a+b;
    a.display();
    return 0;
}