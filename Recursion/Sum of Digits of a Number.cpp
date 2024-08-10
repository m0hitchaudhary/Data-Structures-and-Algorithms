#include <iostream>
using namespace std;

class Solution{
  public:

    int sumOfDigits(int n)
    {
        if(n == 0){
            return 0;
        }
        
        return (n%10 + sumOfDigits(n/10));
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
        cout<<obj.sumOfDigits(n)<<endl;    
        
    }
    return 0;
}
