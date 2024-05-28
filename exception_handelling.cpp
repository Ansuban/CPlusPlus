#include<iostream>
using namespace std;
float division(double a, double b)
{
    try
    {
        float x = a/b;
        throw x;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';  
    }
}
int main()
{
    float divide = division(0,0);
    cout<<divide<<endl;
    return 0;
}