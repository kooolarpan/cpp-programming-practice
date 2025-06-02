/*
Use constructors to initalize the data members.
Define members function named showData() in each class to display the
information. Create two objects of Hero class and dislay the info


 Batman (power)  - Superman (strength)
 Hero (life)

*/

#include <iostream>
using namespace std;

class Batman {
    int power;

   public:
    Batman(int p) { power = p; }
    void showData() { cout << "Batman's Power: " << power << endl; }
};

class Superman {
    int strength;

   public:
    Superman(int s) { strength = s; }
    void showData() { cout << "Superman's Strength: " << strength << endl; }
};

class Hero : public Batman, public Superman {
    int life;

   public:
    Hero(int p, int s, int l) : Batman(p), Superman(s) { life = l; }
    void showData() { cout << "Hero's Life: " << life << endl; }
};

int main() {
    Hero firstHero(5, 6, 10), secondHero(3, 6, 8);

    cout << "\nFirst Hero Info: \n";
    firstHero.Batman::showData();
    firstHero.Superman::showData();
    firstHero.showData();
    cout << "\nSecond Hero Info: \n";
    secondHero.Batman::showData();
    secondHero.Superman::showData();
    secondHero.showData();

    return 0;
}