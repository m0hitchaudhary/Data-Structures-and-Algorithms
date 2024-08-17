#include<bits/stdc++.h>
using namespace std;

template <class T>
T largest(T arr[], int n){
    T max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    
    int t; cin>>t;
    while (t--) {
        int n, q, i;
        cin>>n>>q;
    
    int intArr[n];
    float floatArr[n];
    
        switch(q)
    {
        case 1:
        for(i=0; i<n; i++)
        {
            cin>>intArr[i];
        }
        cout << largest(intArr, n) << endl;
        break;
        
        case 2:
        for(i=0; i<n; i++)
        {
            cin>>floatArr[i];
        }
        cout<<largest(floatArr, n)<<endl;
        break;
    }
    }
    return 0;
}
