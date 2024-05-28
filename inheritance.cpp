/*
Create a class Employee with private data memebers eid ,ename and salary .
Include public member function to read and display value of data member 
(can constructor be used ?). Derive a class named typist  from above class. 
The class should contain a private data member typing speed and public 
member function to read and display value of data member. 
Finally cerate two object of typist and read and display their values.
And also show who is typing fast?
*/
#include<iostream>
using namespace std;
class Employee
{
    protected:
        int eid;
        string ename;
        float salary;
    public:
        Employee (string name, int id, float salaries)
        {
            ename = name;
            eid = id;
            salary = salaries;
        }
        virtual void display()
        {
            cout<<"Employee\'s Name: "<<ename<<endl
                <<"Employee\'s Id: "<<eid<<endl
                <<"Employee\'s Salary:"<<salary<<endl;
        }
};
class Typist : public Employee
{
    private:
        int typiest_speed;
    public:
        Typist (string name, int id, float salaries, int ts) : Employee(name,id,salaries)
        {
            typiest_speed = ts;
        }
        void display() override
        {
            cout<<"Employee\'s Name: "<<ename<<endl
                <<"Employee\'s Id: "<<eid<<endl
                <<"Employee\'s Salary:"<<salary<<endl
                <<"Typing speed: "<<typiest_speed<<endl;
        }
};
int main()
{
    Typist ty("Aakriti ban", 110292, 98000.123, 30);
    ty.display();
    return 0;
}