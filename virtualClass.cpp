#include<iostream>
using namespace std;

class  A{
    protected:
        int a, b;
    public:
        A(int c, int d) : a(c), b(d) {}
        public:
        virtual void display(){
            cout<<a<<endl<<b<<endl;
        }
};
class B : A{
    public:
        B(int a, int b) : A(a,b){}
        void display() override {
            cout<<a<<endl<<b<<endl;
        }
};
int main()
{
    float c = 4.6;
    cout<<c<<endl;
    A b(1.0,0.9);
    b.display();
    B a(0.9,2.2);
    a.display();
}