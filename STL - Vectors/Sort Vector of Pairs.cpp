#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second > b.second;
}

vector<pair<int,int>> sortBySecond(vector<pair<int,int>> &v)
{
    sort(v.begin(), v.end(), cmp);
    return v;
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)
        {
            int a;
            int h;
            cin>>a>>h;
            
            v.push_back({a,h});
        }
        
        
        vector<pair<int,int>>temp = sortBySecond(v);
        
        for(int i=0;i<n;i++)
        {
            cout<<"("<<temp[i].first<<","<<temp[i].second<<") ";
        }
        
        cout<<endl;
    }
    return 0;
}
