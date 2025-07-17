// WAP to convert feet to inch using user defined data type to basic type conversion
// Class to Basic Data Type

#include <iostream>
using namespace std;

class Length{
    float feet;
    public:
    Length(){
        cout << "Enter length (feet): ";
        cin >> feet;
    }
    operator float(){
        float c = feet*12;
        return c;
    }
};

int main(){
    float inch;
    Length l;
    inch = l;
    cout << "Length (inch): "<<inch<<endl;
    return 0;
}