#include <bits/stdc++.h>
using namespace std;

map<int,int> mapInsert(int arr[],int n);

void mapDisplay(map<int,int>mp);

void mapErase(map<int,int>&mp,int x);

map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }
    
    return mp;
    
}

void mapDisplay(map<int,int>mp)
{
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
}

void mapErase(map<int,int>&mp,int x)
{
    if(mp.find(x) != mp.end()){
        mp.erase(x);
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
        
        map<int,int>mp=mapInsert(arr,n);
        mapDisplay(mp);
        int x;
        cin>>x;
        
        mapErase(mp,x);
        mapDisplay(mp);
    }
    return 0;
}
