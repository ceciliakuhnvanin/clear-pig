#include "Supplie.hpp"

Supplie::Supplie() {}

Supplie::Supplie(string name, string description, int energy)
    : Item(name, description)
    { this->energy = energy; }

Supplie::~Supplie() {}

void Supplie::detail() {
    cout << "Nome: " << getName()
        << ", " << getDescription() << endl
        << "Cura " << getEnergy() << " de PV" << endl;
}