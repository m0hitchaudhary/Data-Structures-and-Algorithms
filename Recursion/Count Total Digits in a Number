#include <iostream>
using namespace std;

class Solution{
  public:
    int countDigits(int n)
    {
        if(n == 0){
            return 0;
        }
        
        return 1+countDigits(n/10);
    }
};

int main() {
    int T;

    cin>>T;
    while(T--)
    {
        int n;

        cin>>n;

        Solution obj;
        cout<<obj.countDigits(n)<<endl;
        
    }
    return 0;
}
