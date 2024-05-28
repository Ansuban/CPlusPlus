/*Write a C++ program to implement a class called Date that has 
private member variables for day, month, and year. Include member functions 
to set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class Date
{
    private: 
        int year, month, day;
    public:
        Date(int y, int m, int d)
        {
            year = y;
            month = m;
            day = d;
        }
        ~Date()
        {
            year = 0;
            month = 0;
            day = 0;
        }
        void validate()
        {
            if(day<=32 && month <= 12)
            {
                cout<<"The entered date "<<year<<" "<<month<<" "<<day<<" is valid"<<endl;
            }
            else
            {
                cout<<"The entered date "<<year<<" "<<month<<" "<<day<<" is invalid"<<endl;
            }
        }
};
int main()
{
    int year, month, day;
    cout<<"Enter year, month, day"<<endl;
    cin>>year>>month>>day;
    Date d(year, month, day);
    d.validate();
    return 0;
}