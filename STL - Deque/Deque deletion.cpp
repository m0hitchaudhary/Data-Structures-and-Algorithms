#include<bits/stdc++.h>
using namespace std;
]
void eraseAt(deque <int> &deq, int X)
{
    auto it = deq.begin();
    advance(it, X);
    deq.erase(it);
}

void eraseInRange(deque<int> &deq, int start, int end)
{
    auto it1 = deq.begin();
    advance(it1, start);
    auto it2 = deq.begin();
    advance(it2, end);
    deq.erase(it1, it2);
}

void eraseAll(deque<int> &deq)
{
   deq.clear();
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
        
        int eraseQuery;
        cin>>eraseQuery;
        
        if(eraseQuery == 1)
        {
            int pos;
            cin>>pos;
            eraseAt(deq, pos);
        }
        else if(eraseQuery == 2)
        {
            int start, end;
            cin>>start>>end;
            eraseInRange(deq, start, end);
        }
        else
        {
            eraseAll(deq);
            
        }
        
        if(deq.empty())
            cout << "Empty";
        else
            {for(auto itr = deq.begin(); itr != deq.end(); itr++)
                cout << *itr << " ";}
        cout << endl;
    }
    return 0;
}
