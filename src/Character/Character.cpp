#include "Character.hpp"

Character::Character(std::string name, int skill, int energy, int luck)
    { this->name = name; this ->skill = skill; this->energy = energy; this->luck = luck; }

void Character::takeDamage(int damage) {
    if (this->energy <= damage)
        this->energy = 0;
    else
        this->energy -= damage;
}
