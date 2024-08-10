#include <iostream>
using namespace std;

class Solution{
    public:
        int recursiveSum(int n)
    {
        if(n == 0){
            return 0;
        }
        return (n + recursiveSum(n-1));
    }
};

int main() {
    int T;
    cin>>T;
    while(T--) 
    {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.recursiveSum(N)<<endl;
    }
    return 0;
}
