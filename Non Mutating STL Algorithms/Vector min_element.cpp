#include <bits/stdc++.h>
using namespace std;

int vMin(vector<int>v, int n)
{
    return *min_element(v.begin(), v.end());
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
       
       cout<<vMin(v,n)<<endl;
    }
    return 0;
}
