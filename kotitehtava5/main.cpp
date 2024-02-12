#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo *objectKerrostalo;

    objectKerrostalo = new Kerrostalo;

    objectKerrostalo->laskeKulutus(1);



    delete objectKerrostalo;
    objectKerrostalo=nullptr;
    return 0;
}
