#include <iostream>
using namespace std;

class Apple {
    int w;

   public:
    void setData1() {
        cout << "Enter the value of w: ";
        cin >> w;
    }
    void getData() { cout << "Value of w: " << w << endl; }
};
class Ball : virtual public Apple {
    int x;

   public:
    void setData2() {
        cout << "Enter the value of x: ";
        cin >> x;
    }
    void getData() { cout << "Value of x: " << x << endl; }
};
class Cat : virtual public Apple {
    int y;

   public:
    void setData3() {
        cout << "Enter the value of y: ";
        cin >> y;
    }
    void getData() { cout << "Value of y: " << y << endl; }
};
class Dog : public Ball, public Cat {
    int z;

   public:
    void setData4() {
        cout << "Enter the value of z: ";
        cin >> z;
    }
    void getData() {
        Apple::getData();
        Ball::getData();
        Cat::getData();
        cout << "Value of z: " << z << endl;
    }
};

int main() {
    Dog d;
    d.setData1();
    d.setData2();
    d.setData3();
    d.setData4();

    d.getData();

    return 0;
}