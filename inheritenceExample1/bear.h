#ifndef BEAR_H
#define BEAR_H
#include "animal.h"

#include <iostream>
using namespace std;

class bear : public Animal
{
private:
    string species;
public:
    Bear();
    ~Bear();
    string getSpecies() const;
    void setSpecies(const string &newSpecies);
    bearInfo();
};

#endif // BEAR_H
