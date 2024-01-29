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

    Student objectStudent2("Aino","Joki");
    objectStudent2.studentInfo();

    Student *objectStudent3;
    objectStudent3=new Student("Liisa","Virta");
    objectStudent3->studentInfo();
    delete objectStudent3;
    objectStudent3=nullptr;



    return 0;
}
