#include <iostream>

using namespace std;

int Laskentafunktio(int,int);

int main()
{
    int luku1;
    int luku2;
    cout << "Anna kokonaisluku" << endl;
    cin>>luku1;
    cout << "Anna toinen kokonaisluku" << endl;
    cin>>luku2;
    int vastaus = Laskentafunktio(luku1, luku2);
    cout << vastaus << endl;
    return 0;
}


int Laskentafunktio(int luku1, int luku2){
    int lasku = luku1 + luku2;
    return lasku;
}
