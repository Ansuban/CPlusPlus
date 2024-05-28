/*
input = add(5) - 5
add(5,6) - 11
add(2,3,4) - 9
*/
#include<iostream>
using namespace std;

int add(int a)
{
    return a+0;
}
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter a 3 numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<"Sum = "<< add(a)<<endl;
    cout<<"Sum = "<< add(a,b)<<endl;
    cout<<"Sum = "<< add(a,b,c)<<endl;
    return 0;
}