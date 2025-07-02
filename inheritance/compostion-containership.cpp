#include <iostream>
using namespace std;

class Apple{
    public:
    void eat(){
        cout << "Eat Apple"<<endl;
    }
};
class Ball{
    Apple a;
    public:
    void play(){
        a.eat();
        cout << "Play Ball"<<endl;
    }
};

int main(){
    Ball b;
    b.play();
    return 0;
}