#include <bits/stdc++.h>
using namespace std;
set<int> setInsert(int arr[],int n);
void setDisplay(set<int>s);
void setErase(set<int>&s,int x);

set<int> setInsert(int arr[],int n)
{
    set<int>s(arr, arr+n);
    return s;
    
}

void setDisplay(set<int>s)
{
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

void setErase(set<int>&s,int x)
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
        
        set<int>s=setInsert(arr,n);
        setDisplay(s);
        int x;
        cin>>x;
        
        setErase(s,x);
        setDisplay(s);
    }
    return 0;
}
