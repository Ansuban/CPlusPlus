#include<iostream>
using namespace std;
class Money
{
    private:
        int money = 5000;
    public:
        friend void Borrow(Money);
};
void Borrow(Money abcd)
{
    cout<<"Borrowed amount = 2000\n"<<"Total amount = "<<abcd.money - 2000<<endl;
}
int main()
{
    Money obj;
    Borrow(obj);
    return 0;
}