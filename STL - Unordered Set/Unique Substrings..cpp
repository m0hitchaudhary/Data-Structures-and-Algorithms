#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int unique_substring(string str) {
        unordered_set<string> substrings;
        int n = str.size();
        for (int i = 0; i < n; ++i) {
            string substr = "";
            for (int j = i; j < n; ++j) {
                substr += str[j];
                substrings.insert(substr);
            }
        }
        return substrings.size();
    }
};

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}
