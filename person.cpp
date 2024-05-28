#include<iostream>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    string country;
    public:
    void input()
    {
        cout<<"Enter your name: \n";
        cin>>name;
        cout<<"Enter your age: \n";
        cin>>age;
        cout<<"Enter your country name: \n";
        cin>>country;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Country: "<<country<<endl;
    }
};
int main()
{
    Person okk;
    okk.input();
    okk.display();
}