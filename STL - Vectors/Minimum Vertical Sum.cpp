#include <bits/stdc++.h>
using namespace std;

static bool cmp(vector<int> &a, vector<int> &b){
    return a.size() > b.size();
}

int minimum_vertical_sum(vector<vector<int>>v)
{
    sort(v.begin(), v.end(), cmp);
    int it = v[0].size();
    
    int sum = INT_MAX;
    
    for(int i=0; i<it; i++){
        int temp = 0;
        for(int j=0; j < v.size(); j++){
            
            
            //MAIN LOGIC
            if(v[j].size() > i){
                temp += v[j][i];
            }
            
            
            
        }
        if(temp < sum){
            sum = temp;
        }
    }
    
    return sum;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            vector<int>temp;
            for(int j=0;j<m;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            v.push_back(temp);
        }
        int min_sum=minimum_vertical_sum(v);
        cout<<min_sum<<endl;
    }
    return 0;
}
