/*Write a C++ program to implement a class called Student that has 
private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks 
and display the student's information.*/

#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int Class;
        int roll_num;
        float marks;
    public:
       student(string n, int c, int r, float m)
       {
            name = n;
            Class = c;
            roll_num = r;
            marks = m;
       }
       ~student()
       {
         name = "";
         Class = 0;
         roll_num = 0;
         marks = 0;
       }
    string calculation()
    {
        float per;
        float fmark = 100;
        per = (marks / fmark) * 100;
        if(per > 90)
            return "A+";
        else if(per > 80)
            return "A";
        else if(per > 70)
            return "B+";
        else if(per > 60)
            return "B";
        else if(per > 50)
            return "C+";
        else if(per > 40)
            return "C";
        else
            return "F";
    }
    void display(void){
        system("clear");
        cout<<"------Student Information-------"<<endl
            <<"Student Name: "<<name<<endl
            <<"Student Class: "<<Class<<endl
            <<"Student RollNo.: "<<roll_num<<endl
            <<"Student Marks: "<<marks<<endl
            <<"Student Grade: "<<calculation()<<endl;
    }
};

int main(){
    int r, c;
    string name;
    float marks;
    cout<<"Enter name, class, roll and marks: ";
    cin>>name>>c>>r>>marks;
    student s1(name, c, r, marks);
    s1.display();
    return 0;
}