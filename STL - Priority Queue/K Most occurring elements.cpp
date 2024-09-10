#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
    public:
    int kMostFrequent(int arr[], int n, int k) 
    {
        unordered_map<int, int> temp;
        for(int i=0; i<n; i++){
            temp[arr[i]]++;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto &ele : temp){
            pq.push(ele.second);
            if(pq.size() > k){
                pq.pop();
            }
        }
        int sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }
    return 0; 
}
