#include <bits/stdc++.h>
using namespace std;

int SumMe(vector<int> arr, int n){
    int sum = 0;
    for(auto &x : arr){
        sum += x;
    }
    return sum;
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n;++i){
        cin>>arr[i];
    }
    cout<<SumMe(arr, n)<<endl;
    }
    return 0; 
}
