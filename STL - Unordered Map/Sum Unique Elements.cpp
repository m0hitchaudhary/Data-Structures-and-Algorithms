#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long unique_elements(vector<long>nums)
    {
        unordered_map<int, int> um;
        for(long &x : nums){
            um[x]++;
        }
        long sum = 0;
        for(auto it = um.begin(); it != um.end(); it++){
            if(it->second == 1){
                sum += it->first;      
            }
        }
        return sum;
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
        
        vector<long>v(n,0LL);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        Solution obj;
        cout<<obj.unique_elements(v)<<endl;
    }
    return 0;
}
