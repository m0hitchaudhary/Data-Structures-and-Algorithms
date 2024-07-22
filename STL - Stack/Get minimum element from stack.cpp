#include <bits/stdc++.h>
using namespace std;

class Solution{
    int minEle;
    stack<int> s;
    public:

    int getMin() {
        if (minStack.empty())
            return -1;
        return minStack.top();
    }

    int pop() {
        if (s.empty())
            return -1;
        int top = s.top();
        s.pop();
        if (top == minStack.top()) {
            minStack.pop();
        }
        return top;
    }

    void push(int x) {
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }
};

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {

              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {

              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
