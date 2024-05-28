#include<iostream>
using namespace std;
class Car
{
    private:
    string company;
    string model;
    int year;
    public:
    void input()
    {
        cout<<"Enter company name: \n";
        cin>>company;
        cout<<"enter model of car: \n";
        cin>>model;
        cout<<"enter year: \n";
        cin>>year;
    }
    void display()
    {
        cout<<"\n Company name: "<<company;
        cout<<"\n Model name: "<<model;
        cout<<"\n Year: "<<year;
    }
};
int main()
{
    Car e;
    e.input();
    e.display();
    return 0;
}