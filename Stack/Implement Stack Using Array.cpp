#include <iostream>
using namespace std;

const int stackMax=100000;
int stack[stackMax];
int top=-1;

void push(int data);
void pop();
void display();

void push(int data)
{
    if(top > 100000){
        cout<<"Stack Full"<<"\n";
        return;
    }
    top += 1;
    stack[top] = data;
}

void pop()
{
    if(top == -1){
        cout<<"Stack Empty"<<"\n";
        return;
    }
    top -= 1;
}

void display()
{
    if(top == -1){
        cout<<"-1"<<"\n";
        return;
    }
    for(int i=0; i<=top; i++){
        cout<<stack[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        top=-1;
        
        int queries;
        cin>>queries;
        
        while(queries--)
        {
            int queryType;
            cin>>queryType; 
            if(queryType==1)
            {
                int x;
                cin>>x;
                push(x);//pushing x
            }
            else if(queryType==2)
            {
                pop();
            }
            else
            {
                display();
            }
            
        }
        
    }
    return 0;
}
