/*
Create a class called Time that has seperate int member data for hour, minutes,
and seconds .One constructor should initialize data to 0, and another constructor 
should initialize data to fixed values. Another member function should display
it, in 11:59:59 format. The final member function should add two object of Type
time passed as argument.A main program should crearte to iniatilized time 
objects (const) and one that is not initialized values together 
(can overloading + operator work?), living the result in the third time 
variable. Finally it should display the values of this third variable make 
appropriate member functions const.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        Time(): hour(0), min(0), sec(0) {};
        Time(const int h, const int m, const int s)
        {
            hour = h;
            min = m;
            sec = s;
        }
        void display()
        {
            cout<<"Time = "<<hour<<":"<<min<<":"<<sec<<endl;
        }
        Time operator + (Time T)
        {
            Time temp;
            int total_sec = (T.hour*60*60 + T.min*60 + T.sec) + 
                            (hour*60*60 + min*60 + sec);
            temp.hour = total_sec/3600;
            total_sec %= 3600; //total_sec = total_sec % 3600;
            temp.min = total_sec / 60;
            total_sec %= 60;
            temp.sec = total_sec;
            return temp;
        }
};
int main()
{
    Time T1(11,52,56), T2(9,57,53);
    Time T3;
    T3 = T1+T2;
    T3.display();
    return 0;
}