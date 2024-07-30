#include <bits/stdc++.h> 
using namespace std; 

void DuplicateMe(int arr[], int n) 
{ 
    unordered_set<int> us;
    for(int i=0; i<n ;i++){
        if(count(arr, arr+n, arr[i]) > 1){
            us.insert(arr[i]);
        }
    }
    for(auto it = us.begin(); it != us.end(); it++){
        cout<<(*it)<<" ";
    }
}

int main() 
{ 
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }  
    DuplicateMe(arr, n);
    cout<<endl;
    
}
    return 0; 
}
