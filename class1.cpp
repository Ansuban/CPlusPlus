#include<iostream>
using namespace std;
class person
{
    public: 
        string name;
    private:
        string lastname;
    protected:
        int age;
    public:
        void input();
        void display();
        void change()
        {
            lastname = "ban";
        }

};
class person2 : person
{
    public:
    void display()
    {
        cout<<"First name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void change()
        {
            name="rita";
            age = 48;
        }
};
void person :: input() 
{
    cout<<"enter first name, last name, age: "<<endl;
    cin>>name>>lastname>>age;
}
void person :: display()
{
    cout<<"First name: "<<name<<endl;
    cout<<"Last name: "<<lastname<<endl;
    cout<<"Age: "<<age<<endl;
}
int main()
{
    person p;
    p.input();
    p.display();
    // p.lastname = "ban";
    // p.age = 48;
    p.change();
    p.display();
    person2 p2;
    p2.change();
    p2.display();
    return 0;
}