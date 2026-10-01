#include "Pig.hpp"

Pig::Pig(string name, int skill, int energy, int luck)
    : Character(name, skill, energy, luck) {
        this->totalItems = 0;
        // this->rucksack = rucksack;
}

Pig::~Pig() {
    for (int i = 0; i < this->totalItems; ++i) {
        delete this->rucksack[i];
    }

    delete[] this->rucksack;
}

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

void Pig::useItem() {}

void Pig::storeItem(Item *item) {
    if (totalItems < CAPACITY) 
        rucksack[totalItems++] = item;
}

void Pig::removeItem(int index) {
    if (index < 0 || index >= totalItems)
        return;

    delete rucksack[totalItems];
    rucksack[totalItems] = nullptr;

    for (int i = index; i < totalItems-1; i++) {
        rucksack[i] = rucksack[i+1];
    }

    rucksack[totalItems-1] = nullptr;
    totalItems--;
}

void Pig::displayInfo() {
    cout << "Nome: " << getName() << endl
        << "PD: " << getSkill() << endl
        << "PV: " << getEnergy() << endl
        << "Iniciativa: " << getLuck() << endl;
    for (int i = 0; i < totalItems; i++) {
        cout << "index: " << i << endl;
        rucksack[i]->detail();
    }
}
