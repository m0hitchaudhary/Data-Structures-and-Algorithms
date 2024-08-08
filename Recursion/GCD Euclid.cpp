#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int a,int b)
    {
        if(a % b == 0){
            return b;
        }
        return GCD(b, a%b);
    }
};

int main() {
    int T;
    cin>>T;
    while(T--) 
    {
        int a,b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.GCD(a,b)<<endl;
    }
    return 0;
}
