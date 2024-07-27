#include <bits/stdc++.h>
using namespace std;

multiset<int> multisetInsert(int arr[],int n);

void multisetDisplay(multiset<int>s);

void multisetErase(multiset<int>&s,int x);

multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s(arr, arr+n);
    return s;
}

void multisetDisplay(multiset<int>s)
{
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

void multisetErase(multiset<int>&s,int x)
{
    auto it = s.find(x);
    if(it != s.end()){
        s.erase(x);
        cout<<"erased "<<x;
    }else{
        cout<<"not found";
    }
    
    cout<<endl;
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
        cin>>arr[i];
        
        multiset<int>s=multisetInsert(arr,n);
        multisetDisplay(s);
        int x;
        cin>>x;
        
        multisetErase(s,x);
        multisetDisplay(s);   
    }
    return 0;
}
