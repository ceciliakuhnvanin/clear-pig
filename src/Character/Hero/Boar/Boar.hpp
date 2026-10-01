#pragma once
#include "../Pig/Pig.hpp"
class Boar : public Pig {
    private:
        // Spell *spells[CAPACITY];

    public:
        Boar() {}
        Boar(string name, int skill, int energy, int luck);
        ~Boar();

        int attack() override;
};