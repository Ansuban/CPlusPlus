/*Write a C++ program to create a class called Triangle that has private member 
variables for the lengths of its three sides. Implement member functions 
to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class Triangle
{
    private:
        int length1;
        int length2;
        int length3;
        int Equilateral_triangle, Isosceles_triangle, Scalene_triangle;
    public:
        void input()
        {
            cout<<"enter length1: \n";
            cin>>length1;
            cout<<"enter length2: \n";
            cin>>length2;
            cout<<"enter length3: \n";
            cin>>length3;
        }
        void calculation()
        {
            if(length1 == length2|| length2 == length3 || length1 == length3)
            {
                if(length1==length3 && length1 == length2)
                {
                    cout<<"given triangle is equilateral triangle"<<endl;
                }
                else
                {
                    cout<<"given triangle is isosceles triangle"<<endl;
                }
            }
            else{
                cout<<"given triangle is scalene triangle"<<endl;
            }
        }
};
int main()
{
    Triangle t1;
    t1.input();
    t1.calculation();
    return 0;
}