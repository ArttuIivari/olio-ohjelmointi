#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{

    Chef objectChef1("Gordon Ramsay");
    ItalianChef objectChef2("Anthony Bourdain");
    objectChef1.setName("Gordon Ramsay");
    objectChef1.makeSalad();
    objectChef1.makeSoup();

    objectChef2.setName("Anthony Bourdain");
    objectChef2.makePasta();





    return 0;    

}
