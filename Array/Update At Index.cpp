#include<bits/stdc++.h>
using namespace std;

void updateArray(int arr[], int index, int element){
    arr[index] = element;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int index;
        int element;
        cin >> n;
        cin >> index;
        cin >> element;
    
        int arr[n];
        
        for(int i = 0;i<n;i++)
            arr[i] = i+1;
    
    updateArray(arr, index, element);
    
    cout << arr[index] <<endl;
    
    }
    
    return 0;
}
