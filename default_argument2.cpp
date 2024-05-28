#include<iostream>
using namespace std;

int multiply(int a, int b=1)
{
    int multiply = a* b;
    cout<<"Multiply = "<<multiply<<endl;
    return 0;
}
int main()
{
    multiply( 2);
    return 0;
}