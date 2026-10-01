#pragma once
#include <string>
using namespace std;
class Character {
    private:
        string name;

    protected:
        int skill;
        int energy;
        int luck;
        
    public:
        Character() {}
        Character(string name, int skill, int energy, int luck);
        virtual ~Character() = default;

        string getName() { return this->name; }
        int getSkill() { return this->skill; }
        int getEnergy() { return this->energy; }
        int getLuck() { return this->luck; }

        virtual void takeDamage(int damage);
        virtual int attack() = 0;
};