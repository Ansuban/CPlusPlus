#include<iostream>
using namespace std;

int add(int a,int b = 0)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int sum = add(2,4);
    cout<<"Sum = "<< sum<< endl;
    return 0;
}