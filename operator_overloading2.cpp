/*
OVERLOAD + Operator
obj1= 5+6i
obj2= 4+3i
obj1+obj2 = 9+9i
*/
#include<iostream>
using namespace std;
class Operator
{
    private:
        int real;
        int complex;
    public:
        Operator(int x,int y) : real(x), complex(y)
        {

        }
        Operator operator+ (Operator op)
        {
            op.real = op.real + real;
            op.complex = op.complex + complex;
            return op;
        }
        void display()
        {
            cout<<"Sum = "<<real << "+"<<complex<< "i"<<endl;
        }
};
int main()
{
    Operator ob1(5, 6), ob2(4,3);
    Operator ob3 = ob1 + ob2;
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}