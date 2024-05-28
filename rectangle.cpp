#include<iostream>
using namespace std;
class room
{
    private:
    int l, b, A, P;
    public:
    void input()
    {
        cout<<"\nenter length and width: ";
        cin>>l>>b;
    }
    void calculator()
    {
        A = l* b;
        P = 2*(l+b);
    }
    void display()
    {
        cout<<"\n Area = "<< A;
        cout<<"\n Perimeter = "<<P;
    }
};
int main()
{
    room obj1,obj2;
    obj1.input();
    obj1.calculator();
    obj1.display();
    obj2.input();
    obj2.calculator();
    obj2.display();

}