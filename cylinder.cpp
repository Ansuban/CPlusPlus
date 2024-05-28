#include<iostream>
using namespace std;
class room
{
    private:
    float r,h,A,V;
    public:
    void input()
    {
        cout<<"enter radius and height";
        cin>>r>>h;
    }
    void calculation()
    {
        A = 2*3.14*(r+h);
        V = 3.14*r*r*h;
    }
    void display()
    {
        cout<<"\n Area = "<< A;
        cout<<"\n Volume= "<< V;
    }
};
int main()
{
    room e;
    e.input();
    e.calculation();
    e.display();
    return 0;
}