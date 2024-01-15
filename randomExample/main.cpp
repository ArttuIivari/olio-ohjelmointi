#include <iostream>

using namespace std;

int main()
{
    //Ihan helppooo lololololololllo


    //otetaan seed kellonajasta
    srand(time(0));
    //seedillä sitte random luku
    int myRandom = rand()%10 + 1;
    cout << "Satunnaisluku = " << myRandom << endl;
    return 0;
}
