#pragma once
#include "../Item.hpp"
class Equipment : public Item {
    private:
        int damage;
        bool protection;
        
    public:
        Equipment();
        Equipment(string name, string description, int damage, bool protection);
        ~Equipment();

        int getDamage() { return this->damage; }
        bool isProtection() { return this->protection; }

        void detail() override;
};