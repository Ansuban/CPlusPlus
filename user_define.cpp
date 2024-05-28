#include<iostream>
using namespace std;

int area(int l, int b);
int perimeter(int l, int b);
int main()
{
    int l,b,A,P;
    cout<<"enter length and breadth";
    cin >> l >> b;
    A = area(l,b);
    P = perimeter(l,b);
    cout<<"Area of rectangle"<<A;
    cout<<"\nPerimeter"<<P;
}
int area(int p, int q)
{
    int r;
    r = p*q;
    return (r);
}
int perimeter(int x, int y)
{
    int z;
    z = 2*(x+y);
    return (z);
}
