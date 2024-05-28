#include<iostream>
using namespace std;

class Friend;
class Me
{
    private:
        string name;
        int age;
        string address;
    public:
        Me(string N, int A, string Ad): name(N), age(A), address(Ad) {}
        void display()
        {
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Adress: "<<address<<endl;
        }
        friend class Friend;
};
class Friend
{
    public:
        void display(Me mee)
        {
            cout<<"Name: "<<mee.name<<endl<<"Age: "<<mee.age<<endl<<"Adress: "<<mee.address<<endl;
        }
};
int main()
{
    Me mee("Ashmita Ban",20,"Rajbanshi chowk");
    Friend fri;
    fri.display(mee);
    return 0;
}