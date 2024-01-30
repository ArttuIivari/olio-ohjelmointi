#include "asunto.h"

#include <iostream>

using namespace std;

int main()
{

    Asunto objectAsunto;
    objectAsunto.maarita(2,100);
    double f = objectAsunto.laskeKulutus(1);    //Täytyy returnata johonkin muuttujaan,
                                                //muuten ei koskaan luo destruktoria


    return 0;
}
