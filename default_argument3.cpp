/*
Create a function which takes first name and last name, 
display the first name and last name. display blank if last name is not given by user. 

Hello, Ashmita Ban 
Hello, Ashmita
Hello, User

*/

#include<iostream>
#include<string>
using namespace std;
void Name (string first_name, string last_name = "")
{
    
        cout<<"First name: " << first_name << ", Last Name: " << last_name << endl;
}
int main() 
{
    Name("Ashmita", "Ban");
    Name("Ashmita");
    string a = "a";
    string b = "b";
    string c = a+b;
    cout<<c<<endl;
    return 0;
}
