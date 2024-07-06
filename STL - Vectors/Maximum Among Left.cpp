#include <bits/stdc++.h>
using namespace std;

vector<int> maximum_from_left(vector<int>arr)
{
    vector<int> result;
    int temp = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > temp){
            result.push_back(i);
            temp = arr[i];
        }
    }
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       
       vector<int>v;
       int i;
       for(i=0;i<n;i++)
       {
           int k;
           cin>>k;
           v.push_back(k);
       }
       vector<int> result=maximum_from_left(v);
       for(auto i:result)
       {
           cout<<i<<" ";
       }
       cout<<endl;
    }
    return 0;
}
