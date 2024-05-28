#include<iostream>
using namespace std;
class Array
{
    private:
        int size;
        int* arr;
    public:
        Array(int s, int arr[])
        {
            size = s;
            this->arr = new int[size];
            for(int i=0; i<size; i++)
            {
                this->arr[i] = arr[i];
            }
        }
        ~Array()
        {
            delete[] arr;
        }
         void push(int a)
        {
            int* temp = new int[size + 1];
            for(int i = 0; i < size; i++) temp[i] = arr[i];
            temp[size] = a;
            delete[] arr;
            arr = temp;
            size++;
        }
        void remove(int b)
        {
            int* arrr = new int[size-1]; 
            int j = 0;
            for(int k=0; k<size; k++)
            {
                if(k!=b)
                {
                arrr[j] = arr[k]; 
                j++;
                }
            }
            delete[] arr;
            arr = arrr;
            size--;
        }
        void remove()
        {
            remove(size-1);
        }
        void truncate()
        {
            // delete[] arr;
            this->size -= this->size;
            this->arr = new int[size];
        }
        void display()
        {
            for(int j= 0; j<size; j++)
            {
            cout<<arr[j]<<endl;
            }
        }

};
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    Array ar(5,arr);
    ar.push(12);
    ar.push(13);
    ar.push(89);
    ar.display();
    cout<<endl;
    ar.remove(3);
    ar.display();
    cout<<endl;
    ar.remove();
    ar.display();
    cout<<endl;
    ar.remove();
    ar.display();
    cout<<"table deleted"<<endl;
    ar.truncate();
    ar.display();
    return 0;
}