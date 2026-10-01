#pragma once
#include "../../Character.hpp"
#include "../../../Item/Item.hpp"
#include <random>
#include <iostream>
using namespace std;

class Pig : public Character {
    private:
        static const int CAPACITY = 10;
        int totalItems;
        Item *rucksack[CAPACITY];
    
        public:
        Pig() {}
        Pig(string name, int skill, int energy, int luck);
        ~Pig();

        int attack() override;
        virtual bool useLuck();

        virtual void useItem();

        virtual void storeItem(Item *item);
        virtual void removeItem(int index);

        void displayInfo();
};