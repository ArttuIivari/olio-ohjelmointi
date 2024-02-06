#include "asunto.h"
#include "katutaso.h"

#include <iostream>

using namespace std;

int main()
{

    Kerros objectKerros;
    Katutaso objectKatutaso;

    objectKatutaso.maaritaAsunnot();
    objectKerros.maaritaAsunnot();

    int vastaus = objectKatutaso.laskeKulutus(1) + objectKerros.laskeKulutus(1);
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on " << vastaus << endl;
    return 0;
}
