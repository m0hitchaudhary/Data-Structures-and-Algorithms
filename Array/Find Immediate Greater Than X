#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int immediateGreater(int arr[], int n, int x){
        int ele = -1;
        for(int i=0; i<n; i++){
            if(arr[i] > x){
                if(ele == -1 || ele > arr[i]){
                    ele = arr[i];
                }
            }
        }
        return ele;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        int x;
        cin >> x;
        Solution obj;
        cout << obj.immediateGreater(arr, n, x) << endl;
    }
    
    return 0;
}
