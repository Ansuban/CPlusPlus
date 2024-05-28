#include<iostream>
using namespace std;
class obj
{
    private:

    char name;
    int age;
    float phy_marks, che_marks, math_marks, english_marks, database_marks,Average_marks,Total_marks;
    public:
    void input()
    {
        cout<<"enter name: \n";
        cin>>name;
        cout<<"enter age: \n";
        cin>>age;
        cout<<"enter marks: \n";
        cin>>phy_marks>>che_marks>>math_marks>>english_marks>>database_marks;
    }
    void calculation()
    {
        Average_marks = (phy_marks+che_marks+math_marks+english_marks+database_marks)/5;
        Total_marks = (phy_marks+che_marks+math_marks+english_marks+database_marks);
    }
    void display()
    {
        cout<<"\n Total marks = "<<Total_marks;
        cout<<"\n Average marks = "<<Average_marks;
    }
};
int main()
{
    obj e;
    e.input();
    e.calculation();
    e.display();
    return 0;
}