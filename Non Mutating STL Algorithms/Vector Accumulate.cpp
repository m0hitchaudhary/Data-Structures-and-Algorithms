#include <bits/stdc++.h>
using namespace std;

int vAccu(vector<int>v, int n)
{
    return  accumulate(v.begin(), v.end(), 0);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           v.push_back(x);
       }
       
       cout<<vAccu(v,n)<<endl;
    }
    return 0;
}
