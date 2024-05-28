/*
Opeartor Overloading ++(pre-increment)
if a = 5
++a = 6
*/
#include<iostream>
using namespace std;
class Operator
{
    private:
        int a;
    public:
        Operator(int x)
        {
            a = x;
        }
        void operator++ ()
        {
            ++a;
        }
        void display()
        {
            cout<<a<<endl;
        }
};
int main()
{
    Operator op1(12);
    op1.display();
    ++op1;
    op1.display();
    return 0;
}