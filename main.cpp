#include <iostream>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        Person(){
            cout<<"Person luokan muodostinta kutsuttiin"<<endl;
        }
        ~Person(){
            cout<<"Person luokan tuhoajaa kutsuttiin"<<endl;
        }
        int getAge(){
            return age;
        }
        void setAge(int value){
            age=value;
        }
        string getName(){
            return name;
        }
        void setName(string value){
            name=value;
        }
};
int main()
{

    //Person olion luonti dynaamiseen muistiin ja olion käyttö
    Person *objectPerson = new Person;
    objectPerson->setAge(25);
    objectPerson->setName("Liisa Joki");
    cout<<"Terve "<<objectPerson->getName()<<" olet siis "<<objectPerson->getAge()<<" vuotias"<<endl;
    delete objectPerson;

    return 0;
}
