#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void reverse(int arr[], int low, int high){
        while(low < high){
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
 
    void rotateArr(int arr[], int d, int n){
        d = d%n;
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
    }
};

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, d;
        
        cin >> n >> d;
        
        int arr[n];
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        Solution ob;

        ob.rotateArr(arr, d,n);
        
        for(int i =0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
