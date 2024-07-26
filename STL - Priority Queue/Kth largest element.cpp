#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int KthLargest(int arr[], int n, int k) {
        priority_queue<int> pq(arr, arr+n);
        for(int i=1; i<k; i++){
            pq.pop();
        }
        return pq.top();
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.KthLargest(arr, n, k) << endl;
    }
    return 0;
}
