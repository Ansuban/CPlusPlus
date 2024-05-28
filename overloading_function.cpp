/*
Create a function which takes first name and last name, 
display the first name and last name. display blank if last name is not given by user. 

Hello, Ashmita Ban 
Hello, As
// string LastName;
// string FullName;hmita
Hello, User

*/
#include<iostream>
using namespace std;
// string FirstName;
void display(string fn, string ln)
{
    // FirstName = fn;
    // LastName = ln;
    string FullName = fn+" "+ ln;
    cout<<"Hello, "<<FullName<<endl;
}
void display(string FirstName)
{
    cout<<"Hello, "<<FirstName<<endl;
}
void display()
{
    cout<<"Hello, User! "<<endl;
}
int main()
{
    display("Ashmita", "Ban");
    display("Ashmita");
    display();
    return 0;
}