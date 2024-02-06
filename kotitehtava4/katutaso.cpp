#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double price)
{
    int as1hinta = price * as1.asukasMaara * as1.neliot;
    int as2hinta = price * as2.asukasMaara * as2.neliot;
    int vastaus = as1hinta + as2hinta;
    cout << "Asunnon kulutus, kun hinta = " << price << " on " << vastaus << endl;
    return vastaus;
}
