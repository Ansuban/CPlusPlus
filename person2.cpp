#include<iostream>
using namespace std;
class person
{
    private:
        string name;
        int age;
    public:
        person(string person_name)
        {
            cout<<"Constructor to set name is called "<<endl;
            name=person_name;
            age = 12;
        }
        person (int person_age)
        {
            cout<<"Constructor to set age is called "<<endl;
            name="student ";
            age = 12;
        }
};