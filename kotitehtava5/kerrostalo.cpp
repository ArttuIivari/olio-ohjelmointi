#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    Kolmas.maaritaAsunnot();


}

double Kerrostalo::laskeKulutus(double price)
{
    double vastaus = eka.laskeKulutus(price) + toka.laskeKulutus(price) + Kolmas.laskeKulutus(price);


    cout << "Kerrostalon kulutus, = " << vastaus << endl;

    return vastaus;
}

