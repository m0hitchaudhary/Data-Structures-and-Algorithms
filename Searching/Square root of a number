#include<bits/stdc++.h>
using namespace std;
#include<cmath>

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int low = 0;
        int high = x/2;
        int root = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(mid*mid == x){
                root = mid;
                break;
            }else if(mid*mid < x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        int sq = floor(sqrt(x));
        if(root != -1){
            return root;
        }else{
            return sq;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;   
}
