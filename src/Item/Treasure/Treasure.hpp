#pragma once
#include "../Item.hpp"
class Treasure : public Item {
    private:
        double worth;
    
    public:
        Treasure();
        Treasure(string name, string description, double worth);
        ~Treasure();

        double getWorth() { return this->worth; }
        void detail() override;
};