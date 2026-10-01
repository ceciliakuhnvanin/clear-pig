#pragma once
#include <string>
#include <iostream>
using namespace std;
class Item {
    private:
        string name;
        string description;

    public:
        Item() {}
        Item(string name, string description)
            { this->name = name; this->description = description; }
        ~Item() {}

        string getName() { return this->name; }
        string getDescription() { return this->description; }
        virtual void detail() = 0;
};