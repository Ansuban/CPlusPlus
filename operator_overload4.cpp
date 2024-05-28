/*
Opeartor Overloading --(post-decrement)
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
        Operator(int x) : a(x){}
        
        Operator operator--(int)
        {
            Operator temp = a;
            a--;
            return temp;
        }
        void display()
        {
            cout<<"a= "<<a<<endl;
        }
};
int main()
{
    Operator ob1(12);
    ob1.display();
    ob1--.display();
    ob1.display();
    return 0;
}