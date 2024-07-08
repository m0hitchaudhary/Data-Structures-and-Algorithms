#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int jos(int n, int k){
        
        if(n == 0){
            return 0;
        }
        
        return (jos(n-1, k) + k)%n;  
        
    }
    int josephus(int n, int k)
    {
       int result = jos(n ,k);
       return result + 1;
    }
};

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        Solution ob;
        cout<<ob.josephus(n,k)<<endl;
    }
    return 0;
}
