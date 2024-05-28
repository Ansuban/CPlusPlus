#include<iostream>
using namespace std;
class room
{
    private:
    int l, b, A, P;
    public:
    
    void room :: input()
    {
        cout<<"enter length and breadth: ";
        cin>>l>>b;
    }
    void room :: calculation()
    {
        A = l*b;
        P = 2*(l+b);
    }
    void room :: display()
    {
        cout<<"\n area = "<<A<<"\n perimeter = "<<P;
    }
};
int main()
{
    room obj;
    obj.input();
    obj.calculation();
    obj.display();
    return 0;
}