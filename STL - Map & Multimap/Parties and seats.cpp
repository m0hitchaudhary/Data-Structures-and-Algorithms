#include <bits/stdc++.h>
using namespace std;

void Election2019(char party[], int seats[], int n)
{
    map<char, int> mp;
    for(int i=0; i<n; i++){
        mp[party[i]] = seats[i];
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    cout<<*max_element(seats, seats+n)<<"\n";
}
    
int main() {
    
        int t; 
        cin>>t;
        while(t--)
        {
            int n; 
            cin>>n;
            char party[n];
            int seats[n];
            for(int i = 0; i < n; i++)
                cin>>party[i]; 
             
            for(int i = 0; i < n; i++)
                cin>>seats[i];
             
            Election2019(party, seats, n);
        }
}
