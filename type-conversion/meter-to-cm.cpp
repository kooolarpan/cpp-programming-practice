// Convert meter to cm
#include <iostream>
using namespace std;

class Distance{
    int centimeter;
    public:
    Distance(int meter){
        centimeter = meter*100;
    }
    void display(){
        cout << "Distance: "<<centimeter<<endl;
    }
};

int main(){
    int meter = 5;
    Distance d=meter;
    d.display();
    return 0;
}