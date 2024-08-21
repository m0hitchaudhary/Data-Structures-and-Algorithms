#include<bits/stdc++.h>
using namespace std;

struct Height{
  int feet;
  int inches;
};

int findMax(Height arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, tmp1, tmp2;
        cin >> n;
        Height arr[n];
        for (int i = 0; i < n; i++) {
            cin >> tmp1 >> tmp2;
            arr[i].feet = tmp1;
            arr[i].inches = tmp2;
        }
        int res = findMax(arr, n);
        cout << res << endl;
    }
    return 0;
}

int findMax(Height arr[], int n) {
    int max = 0;
    for(int i=0; i<n; i++){
        int x = arr[i].feet*12 + arr[i].inches;
        if(x > max){
            max = x;
        }
    }
    return max;
}
