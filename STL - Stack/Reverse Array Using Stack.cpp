#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    void reverseArray(int n, int* arr){
      stack<int> s;
      for(int i=0; i<n; i++){
          s.push(arr[i]);
      }
      int i=0;
      while(!s.empty()){
        arr[i] = s.top();
        s.pop();
        i++;
      }
    }
};

int main(){
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
    Solution obj;
    obj.reverseArray(n, arr);
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    }
    return 0;
}
