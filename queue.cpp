#include<iostream>
using namespace std;
class Queue
{
    private:
        int * queue;
        int front;
        int rear;
    public:
        Queue (int queuee[],int size) 
        {
            front = 0;
            rear = size;
            this->queue = new int[size];
            for(int j=0; j<rear; j++)
            {
                queue[j] = queuee[j];
            }
        }
        ~Queue()
        {
            delete[] queue;
        }
        void enqueue(int data)
        {
            int *temp = new int[rear + 1];
            for(int i=0; i<rear; i++)
            {
                temp[i] = queue[i];
            }
            temp[rear] = data;
            rear++;
            delete[] queue;
            queue = temp;
        }
        void display()
        {
            for(int i=0; i<rear; i++)
            {
            cout<<queue[i]<<endl;
            }
        }
        void dequeue()
        {
            if(rear <= 0)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int j=0; j<rear;j++)
            {
                queue[j] = queue[j+1];
            }
            rear--;
        }
};
int main()
{
    int arr[] = {1,2,3,4,5};
    Queue qu(arr,5);
    qu.display();
    cout<<endl<<endl;
    qu.enqueue(6);
    qu.display();
    cout<<endl<<endl;
    qu.dequeue();
    qu.display();
    cout<<endl<<endl;
    qu.dequeue();
    qu.display();
    return 0;
}