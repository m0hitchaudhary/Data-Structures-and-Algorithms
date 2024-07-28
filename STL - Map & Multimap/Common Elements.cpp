#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        map<int, int> mp;
        vector<int> result;
        for(auto it = v1.begin(); it != v1.end(); it++){
            mp[*it]++;
        }

        for(auto it = v2.begin(); it != v2.end(); it++){
            if(mp.find(*it) != mp.end() && mp[*it] > 0){
                result.push_back(*it);
                mp[*it]--;
            }
        }

        sort(result.begin(), result.end());
        return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
