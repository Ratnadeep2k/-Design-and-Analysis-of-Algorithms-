#include<iostream>
using namespace std;
const int N = 1e5+2;
class Queue{
    int *arr;
    int front;
    int rear;
    public:
        Queue()
        {
            arr = new int[N];
            front = -1;
            rear = -1;

        }
        void push(int x)
        {
            if (rear==N-1)
            {
                cout << "Queue overflow"<<endl;
                return;
            }
            rear++;
            arr[rear++] = x;

            if(front==-1)
            {
                front++;
            }
        }

        void pop()
        {
            if (front==-1 || front>rear)
            {
                cout << "Queue have no elements"<<endl;
                return;
            }
            front++;
        }


};



 int main()
 {
     Queue q;
     q.push(0);
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);



     return 0;
 }