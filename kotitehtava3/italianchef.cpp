#include "italianchef.h"



ItalianChef::ItalianChef(string name,int jau, int water):Chef(name)
{
    cout << "Chef " << name << " konstruktori" << endl;
    int math = jau + water;
    int science = math;
    jauhot = jau;
    vesi = water;

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int jau, int ve)
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}
