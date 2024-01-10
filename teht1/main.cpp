#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int satunnaisluku = rand() % 20;
    if(satunnaisluku==0){
        satunnaisluku = 20;
    }
    int arvaus=99;
    while(arvaus!=satunnaisluku){
        cout << "Arvaa numero 1-20 valilta" << endl;
        cin >> arvaus;
        if(arvaus>satunnaisluku){
            cout << "Luku on pienempi." << endl;
        }
        else if(arvaus<satunnaisluku){
            cout << "Luku on suurempi." << endl;
        }
        else if(arvaus==satunnaisluku){
            cout << "Oikea vastaus!" << endl;
        }
    }

    return 0;
}
