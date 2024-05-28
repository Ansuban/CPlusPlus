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
    student s[5];
    for(int i= 0; i<5; i++)
    {
        s[i].input();
        s[i].calculation();
    }
    for(int j = 0; j< 5; j++)
    {
        s[j].display();
    }
    s[0].total_markss();
    return 0;
}