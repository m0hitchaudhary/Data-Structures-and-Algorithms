#include <bits/stdc++.h>
using namespace std;

forward_list<int> insertIntoFL(int arr[],int n)
{
    forward_list<int> result;
    for(int i=0; i<n ;i++){
        result.push_front(arr[i]);
    }
    return result;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
           arr[i]=x;
        }
        
        forward_list<int> temp=insertIntoFL(arr,n);
        
        for(auto i:temp)
        cout<<i<<" ";
        
        cout<<endl;
    }
    return 0;
}
