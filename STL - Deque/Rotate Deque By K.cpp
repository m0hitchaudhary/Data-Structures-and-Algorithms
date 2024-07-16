#include<bits/stdc++.h>
using namespace std;

void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    reverse(deq.begin(), deq.begin() + k);
    reverse(deq.begin() + k, deq.end());
    reverse(deq.begin(), deq.end());
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    reverse(deq.begin(), deq.end() - k);
    reverse(deq.end() - k, deq.end());
    reverse(deq.begin(), deq.end());
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> deq;
        for(int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            deq.push_back(val);
            
        }
        int rotateQuery, k;
        cin>>rotateQuery>>k;
        
        if(rotateQuery == 1)
            right_Rotate_Deq_ByK(deq, n, k);
            
        else left_Rotate_Deq_ByK(deq, n, k);
        
        
        for(auto itr = deq.begin(); itr != deq.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}
