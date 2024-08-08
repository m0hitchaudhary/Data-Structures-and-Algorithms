#include <iostream>
using namespace std;

class Solution{
    public:
        int factorial(int N)
    {
        if(N == 0 || N == 1){
            return 1;
        }
        
        return N*factorial(N-1);
        
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
        cout<<ob.factorial(N)<<endl;
    }
    return 0;
}
