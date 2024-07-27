#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> uniqueSorted(int arr[], int n)
    {
        set<int> s(arr, arr+n);
        vector<int> v(s.begin(), s.end());
        return v;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.uniqueSorted(arr,n);
        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl; 
    }
    return 0;
}
