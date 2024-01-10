#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int);
int main()
{

    int arvausmaara = game(40);
    cout << "Arvausten maara: " << arvausmaara << endl;

    return 0;
}
int game(int maxnum){
    srand(time(NULL));
    int satunnaisluku = rand() % maxnum;
    if(satunnaisluku==0){
        satunnaisluku = maxnum;
    }
    int arvaus=99;
    int arvauscount=0;
    while(arvaus!=satunnaisluku){
        cout << "Arvaa numero 1-40 valilta" << endl;
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
        arvauscount++;
    }
    return arvauscount;
}




