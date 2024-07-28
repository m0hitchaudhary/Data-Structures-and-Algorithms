#include <bits/stdc++.h>
using namespace std;

multimap<int,int> multimapInsert(int arr[],int n);

void multimapDisplay(multimap<int,int>mp);

void multimapErase(multimap<int,int>&mp,int x);

multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;

    for(int i=0; i<n; ++i){
        mp.insert({arr[i], i});
    }
    return mp;
    
}

void multimapDisplay(multimap<int,int>mp)
{
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
}

void multimapErase(multimap<int,int>&mp,int x)
{
    auto it = mp.find(x);
    if(it != mp.end()){
        mp.erase(it->first);
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
        
        multimap<int,int>mp=multimapInsert(arr,n);
        multimapDisplay(mp);
        int x;
        cin>>x;
        
        multimapErase(mp,x);
        multimapDisplay(mp);
    }
    return 0;
}
