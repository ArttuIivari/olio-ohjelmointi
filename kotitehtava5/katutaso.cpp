#include "katutaso.h"

Katutaso::Katutaso()
{
    as1 = new Asunto;
    as2 = new Asunto;

    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Katutaso::laskeKulutus(double price)
{
    cout << "Maaritetaan 2 kpl katutason asuntoja "<< endl;
    double as1hinta = as1->laskeKulutus(price);
    double as2hinta = as2->laskeKulutus(price);
    double vastaus = as1hinta + as2hinta;

    return vastaus;
}
