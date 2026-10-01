#include "Pig.hpp"

Pig::Pig(string name, int skill, int energy, int luck)
    : Character(name, skill, energy, luck) {
        // this->rucksack = rucksack;
}

Pig::~Pig() {}

int Pig::attack() {
    int demage = 2;
    char decision;
    while (decision != 'Y' && decision != 'n') {
        cout << "use luck? (Y/n) ";
        cin >> decision;
        cout << endl;
    }

    if (decision == 'Y'){
        bool lucky = useLuck();
        lucky ? demage = 2 : demage = 0;
    }
    
    return demage;
}

bool Pig::useLuck() {
    bool success;
    int luck = (rand() % 12) + 1;

    if (this->luck < luck)
        success = false;
    else
        success = true;
    
    this->luck--;

    if (success)
        cout << "Sucesso!" << endl;
    else 
        cout << "Fracasso!" << endl;

    cout << "Sorte atual: " << getLuck() << endl;
    return success;
}

void Pig::displayInfo() {
    cout << "Nome: " << getName() << endl
        << "PD: " << getSkill() << endl
        << "PV: " << getEnergy() << endl
        << "Iniciativa: " << getLuck() << endl;
}
