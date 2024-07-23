#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void enqueue(queue<int> &q,int x)
    {
       q.push(x);
    }

    void dequeue(queue<int> &q)
    {
        q.pop();
    }

    int front(queue<int> &q)
    {
        int temp = q.front();
        return temp;
    }

    string find(queue<int> q, int x)
    {
        while(!q.empty()){
            if(q.front() == x) return "Yes";
            q.pop();
        }
        return "No";
    }
};

int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        queue<int> s;
        int q;
        cin>>q;
        solution ob;

        while(q--){
            char ch;
            cin>>ch;
            
            if(ch=='i')
            {
                int x;
                cin>>x;
                
                ob.enqueue(s,x);
                
            }
            else if(ch=='r')
            {
                ob.dequeue(s);
            }
            else if(ch=='h')
            {
                cout << ob.front(s) << endl;
            }
            else if(ch=='f')
            {
                int x;
                cin>>x;
                cout << ob.find(s,x) << endl;
            }
            
        }
    }
    return 0;
}
