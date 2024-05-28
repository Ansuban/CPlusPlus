#include<iostream>
using namespace std;
class Message
{
    private:
        string FirstName;
        string LastName;
    public:
        void display(string fn, string ln)
        {
            FirstName = fn;
            LastName = ln;
            cout<<"Hello, " << FirstName << " " << LastName <<endl;
        }
        void display()
        {
            cout<<"Hello, User!"<<endl;
        }
};
int main()
{
    Message m;
    m.display("Ashmita","Ban");
    m.display();
    return 0;
}