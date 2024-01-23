#include "bear.h"
bear::Bear()
{

}

string bear::getSpecies() const
{
    return species;
}

void bear::setSpecies(const string &newSpecies)
{
    species = newSpecies;
}

void bear::bearInfo()
{
    cout << "olen " << species<< " karhu"<<endl;
    cout << "Varini on "<<color<<endl;
}
