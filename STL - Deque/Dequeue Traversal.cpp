#include<bits/stdc++.h>
using namespace std;

void printDeque(deque<int> &d)
{
    for(auto it = d.begin(); it != d.end(); it++){
        cout<<(*it)<<" ";
    }cout<<"\n";
}    

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> Deq;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            Deq.push_back(val);
        }
        printDeque(Deq);
        
    }
}
