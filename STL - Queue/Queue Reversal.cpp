#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> temp;
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        while(!temp.empty()){
            q.push(temp.top());
            temp.pop();
        }
        return q;
    }
};

int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
