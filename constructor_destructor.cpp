#include<iostream>
using namespace std;
class simple
{
    public:
    //constructor
    simple()
    {
        cout<<"simple object created. "<<endl;
    }
    ~simple()
    {
        cout<<"simple object destructed. "<<endl;
    }
};
int main()
{
    simple obj;
    cout<<"executing some code. "<<endl;
    return 0;
}