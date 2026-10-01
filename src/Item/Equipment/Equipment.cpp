#include "Equipment.hpp"

Equipment::Equipment() {}

Equipment::Equipment(string name, string description, int damage, bool protection)
    : Item(name, description)
    { this->damage = damage; this->protection = protection; }

Equipment::~Equipment() {}

void Equipment::detail() {
    cout << "Nome: " << getName()
        << ", " << getDescription() << endl
        << "FA: " << getDamage() << endl;
    if (isProtection())
        cout << "Armadura" << endl;
    else
        cout << "Arma" << endl;
}
