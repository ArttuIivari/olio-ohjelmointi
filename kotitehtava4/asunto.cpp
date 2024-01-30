#include "asunto.h"

Asunto::Asunto()
{
    cout << "Konstruktori luotu" << endl;
}

Asunto::~Asunto()
{
    cout << "destruktori luotu" << endl;
}

void Asunto::maarita(int lkm, int nelio)
{
    cout << "Asunto maaritetty, asukkaita = " << lkm << " nelioita = " << nelio << endl;
    asukasMaara = lkm;
    neliot = nelio;
}

double Asunto::laskeKulutus(double price)
{
    int vastaus = asukasMaara * neliot;
    cout << "Asunnon kulutus, kun hinta = " << price << " on " << vastaus << endl;
    return vastaus;
}
