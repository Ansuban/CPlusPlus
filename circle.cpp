#include <iostream>
using namespace std;
// creating a class
class CIRCLE
{
public:
    int radius;
    int area()
    {
        return (3.14 * radius * radius);
    }
};
int main()
{
    CIRCLE ok;
    cout << "enter a radius: ";
    cin >> ok.radius;

    cout << "area of circle" << ok.area();
    return 0;
}
