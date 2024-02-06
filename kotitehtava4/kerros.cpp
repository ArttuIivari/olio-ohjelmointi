#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}


void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double price)
{
    int as1hinta = price * as1.asukasMaara * as1.neliot;
    int as2hinta = price * as2.asukasMaara * as2.neliot;
    int as3hinta = price * as3.asukasMaara * as3.neliot;
    int as4hinta = price * as4.asukasMaara * as4.neliot;
    int vastaus = as1hinta + as2hinta + as3hinta + as4hinta;
    cout << "Asunnon kulutus, kun hinta = " << price << " on " << vastaus << endl;
    return vastaus;
}
