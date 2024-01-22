#include "student.h"


string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

void Student::studentInfo()
{
    cout << "nimeni on " << fname <<" " << lname << endl;
}

Student::Student()
{
    cout <<"Student luokan muodostinta(constructor) kutsttiin."<<endl;
}

Student::Student(string fn, string ln)
{
    fname=fn;
    lname=ln;
}

Student::~Student()
{
    cout <<"Student luokan muodostinta(destructor) kutsttiin."<<endl;
}
