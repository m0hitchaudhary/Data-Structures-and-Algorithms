#include <bits/stdc++.h>
using namespace std;

bool vExists(vector<int> v, int x)
{
   auto it = find(v.begin(), v.end(), x);
   if(it == v.end())
   {
       return false;
   }
   return true;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       vector<int> v;
       for(int i = 0; i < n;i++)
       {
           int x;
           cin>>x;
           v.push_back(x);
       }
       
       int x;
       cin>>x;
       
       cout<<vExists(v,x)<<endl;
           
    }
    return 0;
}
