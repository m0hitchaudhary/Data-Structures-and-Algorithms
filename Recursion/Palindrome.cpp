#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    bool isPalin(int n)
    {
        string numstr = to_string(n);
        return isPalinHelper(numstr, 0, numstr.size() - 1);
    }
    
    bool isPalinHelper(string &numstr, int start, int end){
        if(start >= end){
            return true;
        }
        
        return (numstr[start] == numstr[end] && isPalinHelper(numstr, ++start, --end));
    }
};

int main() {
    int T;
    cin>>T;
    while(T--) 
    {
        int N;
        cin>>N;
        Solution obj;
        cout<<obj.isPalin(N)<<endl;
    }
    return 0;
}
