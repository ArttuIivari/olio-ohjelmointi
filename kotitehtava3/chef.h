#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef();
    ~Chef();
    Chef(string);
    void makeSalad();
    void makeSoup();
    string getName() const;
    void setName(const string &newName);

protected:
    string name;
};

#endif // CHEF_H
