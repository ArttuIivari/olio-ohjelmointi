#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
private:
    string race;
    string name;
    string color;
public:
    Dog(string na, string ra, string co);
    void dogInfo();
};

#endif // DOG_H
