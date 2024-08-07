#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}

void MyQueue:: push(int x)
{
        QueueNode* newnode = new QueueNode(x);
        if(front == NULL){
            front = rear = newnode;
            return;
        }
        rear->next = newnode;
        rear = rear->next;
}

int MyQueue :: pop()
{      
        if(front == NULL){
            return -1;
        }
        int temp = front->data;
        front = front->next;
        return  temp;
}
