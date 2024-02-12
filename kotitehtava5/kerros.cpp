#include "kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
    cout << "Kerros luotu" << endl;

}


void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double price)
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja "<< endl;
    double as1hinta = as1->laskeKulutus(price);
    double as2hinta = as2->laskeKulutus(price);
    double as3hinta = as3->laskeKulutus(price);
    double as4hinta = as4->laskeKulutus(price);
    double vastaus = as1hinta + as2hinta + as3hinta + as4hinta;

    return vastaus;
}
