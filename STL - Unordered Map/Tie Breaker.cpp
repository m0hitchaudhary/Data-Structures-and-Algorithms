#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string TieBreak(string names[], int n)
    {
        unordered_map<string, int> um;
        set<string> os;
        for(int i=0; i<n; i++){
            um[names[i]]++;
        }

        int max = 0;
        for(auto it = um.begin(); it != um.end(); it++){
            if(it->second > max){
                max = it->second;
            }
        }

        for(auto it = um.begin(); it != um.end(); it++){
            if(it->second == max){
                os.insert(it->first);
            }
        }
        
        auto it = os.begin();
        string winner = *it; 
        return winner;
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
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        Solution ob;
        cout << ob.TieBreak(names,n) <<endl; 
    }
}
