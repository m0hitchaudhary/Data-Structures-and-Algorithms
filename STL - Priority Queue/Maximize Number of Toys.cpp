#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int max_toys(int arr[], int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);
        int count = 0;
        for(int i=0; i<n; i++){
            int temp = pq.top();
            if((k - temp) >= 0){
                k -= temp;
                count++;
                pq.pop();
            }else{
                break;
            }
        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int k;
        cin>>k;
        Solution ob;
        cout<< ob.max_toys(arr, n, k)<<endl;
    }
    return 0;
}
