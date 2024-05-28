/*
1. Create a class with private data and show, it only accesible on base class.
*/
#include<iostream>
using namespace std;
class Whatever 
{
    private:
        string privateData;
    public:
        Whatever() 
        {
            privateData = "This is private data";
        }
        friend void showPrivateData (Whatever);

};
        void showPrivateData(Whatever obj) 
        {
            cout << "Private data: " << obj.privateData << endl;
        }

int main() 
{   
    Whatever obj;
    showPrivateData(obj);
    return 0;
}