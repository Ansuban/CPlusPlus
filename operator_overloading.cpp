#include<iostream>
using namespace std;
class Operator
{
    private:
        int a;
    public:
        Operator(int x) : a(x)
        {
            //a = x;
        }
        Operator operator+(Operator op)
        {
            this->a = this->a+op.a;
            return *this;
        }
        Operator operator-(Operator op)
        {
            this->a = this->a-op.a;
            return *this;
        }
        void display()
        {
            cout<<"a = "<<a<<endl;
        }
};
int main()
{
    Operator ob1(2), ob2(8);
    Operator ob3 = ob1 + ob2;
    ob3.display();
    Operator ob4 = ob3 - ob2;
    ob4.display();
    return 0;
}