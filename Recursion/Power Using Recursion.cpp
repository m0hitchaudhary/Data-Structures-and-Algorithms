#include <iostream>
using namespace std;

class Solution{
  public:
    int RecursivePower(int n,int p)
    {
        if(p == 0){
            return 1;
        }
        return n*RecursivePower(n, p-1);
    }
};

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n,p;
        cin>>n>>p;

        Solution obj;
        cout<<obj.RecursivePower(n,p)<<endl;
    }
    return 0;
}
