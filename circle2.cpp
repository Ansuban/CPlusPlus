#include<iostream>
using namespace std;
class circle
{
    private:
        float Area, radius, Circumference;
    public:
        void input()
        {
            cout<<"enter radius: ";
            cin>>radius;
        }
        void calculation()
        {
            Area = 3.14 * radius * radius;
            Circumference = 2* 3.14*radius;
        }
        void display()
        {
            cout<<"\n Area of circle = "<<Area;
            cout<<"\n Circumference of circle = "<<Circumference;
        }
};
int main()
{
    circle e;
    e.input();
    e.calculation();
    e.display();
    return 0;
}
