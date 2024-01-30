#include "person.h"

void Person::setFname(const string &newFname)
{
    fname = newFname;
}

void Person::setLname(const string &newLname)
{
    lname = newLname;
}

void Person::personInfo()
{
    cout <<  endl;
    cout << "INFO ********--------*******" << endl;
    cout << "Nimeni on " << fname << " " << lname << endl;
    cout << "Kissani tiedot : " << endl;
    objectCat1.catInfo();
    cout << "******--------********" << endl;
    cout << endl;
}

void Person::setCatData()
{
    objectCat1.setName("Karvinen");
    objectCat1.setColor("Oranssi");

    //                          jeeejeee missä ella on onkohan sillä kivaa nytte vai onko sillä ihan tylsää
}

void Person::setDogData()
{
    objectDog1.setName
}

Person::Person()
{

}

Person::~Person()
{
    cout << "Person-luokan tuhoaja" << endl;
}

Person::Person(string fn, string ln)
{
    fname=fn;
    lname=ln;
}
