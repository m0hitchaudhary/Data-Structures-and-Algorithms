#include <bits/stdc++.h>
using namespace std;

void sortArray(int a[], char b[], int n){
    pair<int, char> res[n];
    for(int i=0; i<n; i++){
        res[i] = pair<int, char>(a[i], b[i]);
    }
    sort(res, res + n);
    for(int i=0; i<n; i++){
        cout<<res[i].second<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        char b[n];
        for(int i = 0;i < n; i++){
            cin>>b[i];
        }
        
        sortArray(a, b, n);
    
        cout<<"\n";
    }
}
