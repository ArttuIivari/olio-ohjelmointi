#include <iostream>

using namespace std;

void multiplynumbers(int, int);
void multiplynumbers2(int *, int *);

int main()
{
    int luku1=5, luku2=9;
    cout << "luku1 mainissa = " << luku1 << endl;
    cout << "luku2 mainissa = " << luku2 << endl;
    multiplynumbers(luku1,luku2);
    //Nämä ovatkin samat luvut, miksi?
    //Voidissa se ei palauta muuttujien arvoja facepalm bruh moment
    cout << "lopuksi luku1 mainissa = " << luku1 << endl;
    cout << "lopuksi luku2 mainissa = " << luku2 << endl;
    multiplynumbers(luku1,luku2);
    cout << "lopuksi luku1 mainissa = " << luku1 << endl;
    cout << "lopuksi luku2 mainissa = " << luku2 << endl;
    return 0;
}

void multiplynumbers(int luku1, int luku2){
    luku1=luku1*2;
    luku2=luku2*2;
    cout << "Luku 1 on(1) = " << luku1 << endl;
    cout << "Luku 2 on(1) = " << luku2 << endl;
}
//pointerjuttuja taas jee
void multiplynumbers2(int *luku1, int *luku2){
    *luku1=*luku1*2;
    *luku2=*luku2*2;
    cout << "Luku 1 on (2) = " << luku1 << endl;
    cout << "Luku 2 on (2) = " << luku2 << endl;
}


