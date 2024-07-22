#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int profit(vector<int> V) {
        int n = V.size();
        if (n == 0) return 0;
        
        stack<int> s;
        int totalProfit = 0;
        
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && V[i] > V[s.top()]) {
                int idx = s.top();
                s.pop();
                totalProfit += (V[i] - V[idx]);
            }
            s.push(i);
        }
        
        return totalProfit;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        Solution ob;
        int ans=ob.profit(v);
        cout<<ans<<endl;
    }
    return 0;
}
