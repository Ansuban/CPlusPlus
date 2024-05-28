/* 10. Write a C++ program to implement a class called Shape with 
virtual member functions for calculating area and perimeter. 
Derive classes such as Circle, Rectangle, and Triangle from the Shape class 
and override virtual functions accordingly.*/
#include<iostream>
using namespace std;
class shape
{ 
    protected:
        virtual void area(){}
        virtual void perimeter(){}
};
class circle : shape
{
    private:
        float radius;
    public: 
        circle(float r){ radius = r; }
        ~circle(){}
        void area() override
        {
            cout<<"Area of Circle is: "<<3.14*radius*radius<<endl;
        }
        void perimeter() override
        {
            cout<<"Perimeter of Circle is: "<<2*3.14*radius<<endl;
        }
};
class rectangle : shape
{
    private:
        int length;
        int breadth;
    public:
        rectangle(int l, int b) {length = l; breadth = b;}
        ~rectangle(){}
        void area() override
        {
            cout<<"Area of Rectangle is: "<<length*breadth<<endl;
        }
        void perimeter() override
        {
            cout<<"Perimeter of Rectangle is: "<<2*(length+breadth)<<endl;
        }
};
class triangle : shape
{
    private:
     int h, p, b;
    public:
        triangle(int hi, int pi, int bi){h = hi; p = pi; b = bi;}
        ~triangle(){}
        void area() override
        {
            cout<<"Area of Triangle is: "<<(float)1/2*(b*h)<<endl;
        }
        void perimeter() override
        {
            cout<<"Perimeter of Triangle is: "<<p+b+h<<endl;
        }
};
int main()
{
    circle C(10);
    C.area();
    C.perimeter();
    rectangle R(12,12);
    R.area();
    R.perimeter();
    triangle T(2,2,2);
    T.area();
    T.perimeter();
}