#include "cat.h"

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::catInfo()
{


    //jos color on private
    cout << "Nimeni on " << name << "olen " << getColor() <<endl;

    //jos color on protected tai public
    cout << "Nimeni on " << name << " olen " << color << endl;
}

Cat::Cat()
{
    cout<<"Cat luokan muodostin"<<endl;

}

Cat::~Cat()
{
    cout<<"Cat luokan tuhoaja" << endl;
}
