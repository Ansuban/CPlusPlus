/*
Add two unknown datatype 
*/
#include<iostream>
using namespace std;
template <typename as>
class Array
{
    private:
    int size;
    as *arr;
    public:
    Array(int s, as ar[]){
        size = s;
        arr = new as[size];
        for(int i=0;i<size; i++)
        {
            arr[i] = ar[i];
        }
    }
    void display()
    {
        for (size_t i = 0; i < size; i++)
        {
            cout<<"data: "<<arr[i]<<endl;
        }
        
    }
    void iterate_devide(){
        float div = arr[0];
        for (size_t i = 1; i < size; i++)
        {
            div = div / arr[i];
        }
        cout<<"Result = "<<div<<endl;
    }

};
int main()
{
    int op[] = {1,2,3,4,5};
    float opp[] = {6.09,7.99,8.23,9.15,10.23};
    Array<int> obj(5,op);
    Array<float> obj1 (5, opp);
    obj.display();
    obj.iterate_devide();
    obj1.display();
    obj1.iterate_devide();

    return 0;
}