#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int searchInSorted(int arr[], int n, int k) 
    { 
       int low = 0;
       int high = n-1;
       while(low <= high){
           int mid = low + (high - low)/2;
           if(arr[mid] == k){
               return 1;
           }else if(arr[mid] < k){
               low = mid + 1;
           }else{
               high = mid - 1;
           }
       } 
      return -1;
    }
};

int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }
    return 0; 
} 
