#include<bits/stdc++.h>
using namespace std;

void deleteFromArray(int arr[], int n, int index){
  for(int i=index; i<n; i++){
      arr[i] = arr[i+1];
  }
  arr[n-1] = 0;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int index;
        cin >> n;
        cin >> index;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            arr[i] = i+1;
        }
        
        deleteFromArray(arr, n, index);
    
        for(int i = 0;i<n;i++)
            cout << arr[i] << " ";
            
          cout<<endl;
    }
    return 0;
}
