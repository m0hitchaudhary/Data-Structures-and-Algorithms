#include <bits/stdc++.h>
using namespace std;

vector<int> vFill(vector<int>&v)
{
    fill(v.begin(), v.end(), 0);
    return v;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        vector<int> ans=vFill(v);
        
        for(auto x:ans)
        cout<<x<<" ";
        
        cout<<endl;
    }
    
    return 0;
}
