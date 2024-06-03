#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    long long toh(int n, int from, int to, int aux) {
        
        if(n == 0){
            return 0;
        }
        toh(n-1, from, aux, to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<"\n";
        toh(n-1, aux, to, from);
        
        return pow(2, n) - 1;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        
        int N;
        cin >> N;
        
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
