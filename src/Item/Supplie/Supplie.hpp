#pragma once
#include "../Item.hpp"
class Supplie : public Item {
    private:
        int energy;
        
    public:
        Supplie();
        Supplie(string name, string description, int energy);
        ~Supplie();

        int getEnergy() { return this->energy; }
        void detail() override;
};