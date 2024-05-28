/*wap to enter name age and marks of single subject and display it using
class and object*/
#include <iostream>
#include<string.h>
using namespace std;
class student
{
private:
    string studentname;
    int age;
    float marks;
public:
    void input()
    {
        cout<<"enter name, age, marks ";
        cin>>studentname>>age>>marks;
    }
    float calculation()
    {
        static float total_marks;
        total_marks = total_marks + marks;
        return total_marks - marks;
    }
    void display()
    {
        cout<<"name = "<<studentname<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"marks = "<<marks<<endl;
    }
    void total_markss()
    {
        cout<<"total marks = "<<calculation()<<endl;
    }
};
int main()
{
    string name;
    int age;
    float marks;
    student s1,s2,s3,s4,s5;
    s1.input();
    s2.input();
    s3.input();
    s4.input();
    s5.input();
    s1.calculation();
    s2.calculation();
    s3.calculation();
    s4.calculation();
    s5.calculation();
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s1.total_markss();
    return 0;
}