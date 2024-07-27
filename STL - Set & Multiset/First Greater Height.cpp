#include<bits/stdc++.h>
using namespace std;

vector<int> greater_height(vector<int>v)
{
    int n = v.size();
    vector<int> result(n, -1);
    set<int> s;
    for(int i=0; i<n; i++){
        auto it = s.upper_bound(v[i]);
        if(it != s.end()){
            result[i] = *it;
        }
        s.insert(v[i]);
    }
    return result;
}

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
        vector<int> result=greater_height(v);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
