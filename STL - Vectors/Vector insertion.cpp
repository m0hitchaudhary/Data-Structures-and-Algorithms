#include<bits/stdc++.h>
using namespace std;

vector<int> fillVector(int arr[], int n)
{
    vector<int> result(arr, arr+n);
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
        
        int arr[n];
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        vector<int> res = fillVector(arr,n);
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
}
