#include<iostream>
using namespace std;
class Array
{
    public:
        int *arr;
        int size;
    public:
        Array(int s, int a[])
        {
            arr = new int [s];
            size = s;
            for(int i = 0; i<size ; i++)
            {
                arr[i] = a[i];
            }
        }
        int operator[] (int i)
        {
            return arr[i];
        }
        int operator()(int i)
        {
            int x = arr[i];
            return x;
        }
};
int main()
{
    int arr[] = {1, 3, 4, 5};
    Array ar(4,arr);
    cout<<"A[0] = "<<ar[0]<<endl<<"A(0) = "<<ar(0)<<endl;
    return 0;
}