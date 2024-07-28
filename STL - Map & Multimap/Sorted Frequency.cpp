#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void freqSorted(int arr[], int n)
    {
       map<int, int> mp;
       for(int i=0; i<n; i++){
           auto it = mp.find(arr[i]);
           if(it != mp.end()){
               (*it).second++;
           }else{
               mp[arr[i]] = 1;
           }
       }

       for(auto it = mp.begin(); it != mp.end(); it++){
          cout<<"("<<(*it).first<<","<<(*it).second<<")"<<" ";
       }

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
        ob.freqSorted(arr,n);
        
        cout<<endl;
    }
    return 0;
}
