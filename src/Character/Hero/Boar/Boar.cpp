#include "Boar.hpp"

Boar::Boar(string name, int skill, int energy, int luck) 
    : Pig(name, skill, energy, luck) {
    // add spells
}

Boar::~Boar() {
    // delete spells;
}

int Boar::attack() {
    int demage = 2;
    char decision;

    do {
        cout << "cast spell (Y/n) ";
        cin >> decision;
        cout << endl;
    } while (decision != 'Y' && decision != 'n');

    if (decision == 'Y'){
        cout << "Add feat castSpell()" << endl;
    }

    do {
        cout << "use luck? (Y/n) ";
        cin >> decision;
        cout << endl;
    } while (decision != 'Y' && decision != 'n');

    if (decision == 'Y'){
        bool lucky = useLuck();
        lucky ? demage = 2 : demage = 0;
    }
    
    return demage;
}