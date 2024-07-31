#include<bits/stdc++.h>
using namespace std;

vector<string> login_system(vector<string> v) {
    vector<string> result;
    unordered_map<string, int> countMap;
    for (const string& username : v) {
        if (countMap.find(username) == countMap.end()) {
            result.push_back(username);
            countMap[username] = 1;
        } else {
            int count = countMap[username]++;
            result.push_back(username + to_string(count));
        }
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
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string k;
            cin>>k;
            v.push_back(k);
        }
        vector<string>ans=login_system(v);
        for(auto i:ans)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
