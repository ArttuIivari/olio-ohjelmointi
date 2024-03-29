#include <iostream>
#include <memory>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        int getAge() const {
            return age;
        }
        void setAge(int value){
            age=value;
        }
        string getName() const {
            return name;
        }
        void setName(string value){
            name=value;
        }
};
int main()
{
    //Person olion luonti pinomuistiin ja olion käyttö
    Person objectPerson1;
    objectPerson1.setAge(25);
    objectPerson1.setName("Teppo Testi");
    cout<<"Terve "<<objectPerson1.getName()<<" olet siis "<<objectPerson1.getAge()<<" vuotias"<<endl;

    //Person olion luonti dynaamiseen muistiin ja olion käyttö
    Person *objectPerson2 = new Person;
    objectPerson2->setAge(25);
    objectPerson2->setName("Liisa Joki");
    cout<<"Terve "<<objectPerson2->getName()<<" olet siis "<<objectPerson2->getAge()<<" vuotias"<<endl;
    delete objectPerson2;
    objectPerson2=nullptr;

    shared_ptr<Person> objectPerson3 = make_shared<Person>(25,"Teppo testi");
    cout << "terve " << objectPerson3->getName()<<" olet siis "<<objectPerson3->getAge()<< " vuotias"<<endl;


    return 0;
}
