#include<iostream>
using namespace std;
class A;
class B
{
    private:
        int b= 2;
    public: 
        void decrement(A a);
};
class A
{
    private:
        int a = 5;
    public:
    //friend class B;
        friend void B::decrement(A);
};
void B::decrement(A a){
    cout<<a.a - b<<endl;
}
int main()
{
    A obj;
    B objj;
    objj.decrement(obj);
    return 0;
}