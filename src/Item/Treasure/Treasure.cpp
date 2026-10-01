#include "Treasure.hpp"

Treasure::Treasure() {}

Treasure::Treasure(string name, string description, double worth)
    : Item(name, description)
    { this->worth = worth; }

Treasure::~Treasure() {}

void Treasure::detail() {
    cout << "Nome: " << getName()
        << ", " << getDescription() << endl
        << "$" << getWorth() << endl;
}
