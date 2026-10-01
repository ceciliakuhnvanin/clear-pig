#pragma once
#include "../../Character.hpp"
#include <random>
#include <iostream>
using namespace std;

class Pig : public Character {
    private:
        // Rucksack rucksack;
    public:
        Pig() {}
        Pig(string name, int skill, int energy, int luck);
        ~Pig();

        int attack() override;
        virtual bool useLuck();

        void displayInfo();
};