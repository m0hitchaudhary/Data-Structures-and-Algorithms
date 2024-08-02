#include <bits/stdc++.h>
using namespace std;

int upBound(vector<int> v, int k)
{
    auto it = upper_bound(v.begin(), v.end(), k);
    if(it == v.end()) return -1;
    return *it;
}

int lowBound(vector<int> v, int k)
{
    auto it = lower_bound(v.begin(), v.end(), k);
    if(it == v.end()) return -1;
    return *it;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
        {
            
            cin>>x;
            V[i] = x;
        }
        
        cout << upBound(V, k) << " " << lowBound(V, k)<<endl;;
        
    }
    return 0;
}
