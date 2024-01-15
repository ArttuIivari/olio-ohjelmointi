#include "student.h"

#include <iostream>

using namespace std;
//esimerkki student luokasta, jolla
//private tyyppiset jäsenmuuttujat fname, lname
//ja niille public tyyppiset getter ja setter metodit
//sekä public tyyppinen metodi studentInfo, joka tulostaa
//tiedot



int main()
{

    //Luodaan Student luokasta olio pinoon
    Student objectStudent1;
    objectStudent1.setFname("Teppo");
    objectStudent1.setLname("testi");
    objectStudent1.studentInfo();

    return 0;
}
