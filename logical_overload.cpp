#include<iostream>
using namespace std;
class Logical
{
    private: 
        bool a = 1;
    public:
        Logical(bool x) : a(x){}
        bool operator& (Logical l)
        {
            if(a == true && l.a == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool operator|| (Logical l)
        {
            if(a == false && l.a == false)
            {
                return false;
            }
            else
            {
                return true;
            }
        } 
        bool operator! ()
        {
           a = !a;
           return a;
        }
        void display()
        {
            cout<<"Result = "<<a<<endl;
        }
};
int main()
{
    Logical l1(1), l2(0);
    Logical l3 = l1 & l2;
    l3.display();
    Logical l4 = l1 || l2;
    l4.display();
    Logical l5 = !l4;
    l5.display();
}