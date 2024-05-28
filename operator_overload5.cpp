/*
overload arithematic *(multiply) and /(division) operator.
*/

#include<iostream>
using namespace std;
class Operator
{
    private:
        int a;
    public:
        Operator(int x) : a(x){}
        Operator operator* (Operator op)
        {
            a = a * op.a;
            return *this;
        }
        void displayMultiplication()
        {
            cout<<"Multiply = "<<a<<endl;
        }
        Operator operator/ (Operator op)
        {
            a = (float)a / (float)op.a;
            return *this;
        }
        void displayDivision()
        {
            cout<<"Division = "<<a<<endl;
        }

};
int main()
{
    Operator M = 2, D = 2;
    Operator mul = M * D;
    mul.displayMultiplication();
    Operator M1 = 2, D1 = 2;
    Operator div = M1 / D1;
    div.displayDivision();
    return 0;
}