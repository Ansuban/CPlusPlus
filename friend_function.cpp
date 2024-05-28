#include <iostream>
using namespace std;
class Friend
{
private:
    string name;

public:
    Friend(string name1) : name(name1) {}
    friend void display(Friend);
};
void display(Friend f)
{
    cout<<"Name = "<<f.name<<endl;
}
int  main()
{
    Friend abcd("Ashmita");
    display(abcd);
    return 0;
}
