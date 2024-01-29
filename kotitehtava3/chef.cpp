#include "chef.h"

Chef::Chef()
{
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

Chef::Chef(string name)
{

}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{

}

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}
