#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> s1;
        int mid = floor((sizeOfStack + 1)/2);
        if(sizeOfStack%2 != 0){
            while(mid > 1){
                s1.push(s.top());
                s.pop();
                mid--;
            }
        }else{
            while(mid > 0){
                s1.push(s.top());
                s.pop();
                mid--;
            }
        }
        s.pop();
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }
            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
