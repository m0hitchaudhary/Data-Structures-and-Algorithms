#include <bits/stdc++.h>
using namespace std;

void removeFromFront(forward_list<int> &list)
{
    auto it = list.before_begin();
    list.erase_after(it);
}

void removeAfter(forward_list<int> &list, int X)
{
    auto it = list.before_begin();
    advance(it, X);
    if(it != list.end()){
        list.erase_after(it);
    }
}

void removeFromInRange(forward_list<int> &list, int start, int end)
{
    auto begin = list.before_begin();
    advance(begin, start);
    auto stop = list.before_begin();
    advance(stop, end);
    list.erase_after(begin, stop);
}

void removeAll(forward_list<int> &list)
{
    list.clear();
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, val;
        cin>>N;
        
        forward_list<int> list;
        
        for(int i = 1; i <= N; i++)
        {
            cin>>val;
            list.push_front(val);
        }
        
        int typeQuery;
        cin>> typeQuery;
        
        if(typeQuery == 1)
        {
            removeFromFront(list);
            
        }else if(typeQuery == 2)
        {
            int x;
            cin>>x;
            removeAfter(list, x);
        }else if(typeQuery == 3)
        {
            int start, end;
            cin>>start>>end;
            removeFromInRange(list, start, end);
        }
        else {
            removeAll(list);
        }
       
        if(list.empty())
            cout << "Empty" <<endl;
        else
        {
            for(int &temp : list)
            cout << temp << " ";
            cout <<endl;
            
        }
        
    }
}
