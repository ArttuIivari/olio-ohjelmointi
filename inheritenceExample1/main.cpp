#include "cat.h"
#include "bear.h"

#include <iostream>

using namespace std;

int main()
{
//    Cat objectCat;
//    objectCat.setColor("black");
//    cout<<"Color is " << objectCat.getColor() <<endl;

    Cat *objectCat2=new Cat;
    objectCat2->setColor("oranssi");
    //cout<<"Color is " << objectCat2->getColor() <<endl;
    objectCat2->setName("Karvinen");
    objectCat2->catInfo();
    delete objectCat2;
    objectCat2=nullptr;

    Bear *objectBear=new Bear;
    objectBear->setSpecies("Jaakarhu");
    objectBear->setColor("valkoinen");
    objectBear->bearInfo();
    delete objectBear;
    objectBear=nullptr;

    return 0;
}
