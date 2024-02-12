#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Kerros;
    Kolmas = new Kerros;


    cout << "Kerrostalo luotu" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();


}

double Kerrostalo::laskeKulutus(double price)
{
    double vastaus = eka->laskeKulutus(price) + toka->laskeKulutus(price) + Kolmas->laskeKulutus(price);


    cout << "Kerrostalon kulutus, = " << vastaus << endl;

    return vastaus;
}

