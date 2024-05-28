/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. 
Include member functions to calculate and set salary 
based on employee performance.*/
#include<iostream>
using namespace std;
class Employee
{
    private:
        string employee_name;
        int employee_id;
        float salary;
    public:
        void input()
        {
            cout<<"enter employee name: \n";
            cin>>employee_name;
            cout<<"enter employee id: \n";
            cin>>employee_id;
            cout<<"enter salary: \n";
            cin>>salary;
        }
        void calculation(float performance_factor)
        {
            salary = salary * performance_factor;
        }
        void display()
        {
            cout<<"Employee Name: "<<employee_name<<endl
                <<"Employee Id: "<<employee_id<<endl
                <<"Salary: "<<salary<<endl;
        }
};
int main()
{
    float performance_factor;
    Employee e1;
    e1.input();
    e1.display();
    cout<<"enter performance factor: "<<endl;
    cin>>performance_factor;
    performance_factor = 1+(performance_factor/100);
    e1.calculation(performance_factor);
    cout<<"After increment by performance."<<endl;
    e1.display();
    return 0;
}