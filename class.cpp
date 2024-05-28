#include<iostream>
using namespace std;
// creating a class
class BTECHEDIT
{
    public:
    int length;
    int breadth;
    int height;
    int area()
    {
        return (length * breadth);
    }
    int volume()
    {
        return (length*breadth*height);
    }
};
int main()
{
    BTECHEDIT e;
    e.length = 30;
    e.breadth=20;
    e.height = 10;
    cout <<"area "<<e.area();
    cout <<"\n volume"<<e.volume();
}