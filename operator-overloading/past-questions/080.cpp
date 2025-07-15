// Create a class named Point with data members x(int) and y(int). 
// Add operator overloading to find the Euclidean distance between two points.

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x,y;
    public:
    Point(){
        x=0,y=0;
    }
    void get(){
        cout << "Enter value of X: ";
        cin >> x;
        cout << "Enter value of Y: ";
        cin >> y;
    }
    void display(){
        cout << "X: "<<x<<" Y: "<<y<<endl;
    }
    friend double operator-(Point &p1, Point &p2);
};
double operator-(Point &p1, Point &p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main(){
    Point p1,p2;
    p1.get();
    p2.get();
    double distance = p1-p2;
    cout << "Euclidean distance: "<<distance<<endl;
    return 0;
}