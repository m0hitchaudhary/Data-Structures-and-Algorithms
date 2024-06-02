#include<iostream>
using namespace std;

class Solution{
  public:
    int isSorted(int arr[],int n)
    {
      bool asc = true;
      bool des = true;
      
      for(int i=0; i<n-1; i++){
          if(arr[i] > arr[i+1]){
              asc = false;
          }
          if(arr[i] < arr[i+1]){
              des = false;
          }
      }
      
      return asc || des;
    }
};

int main() {
    int T;
    cin>>T;
    while(T--) 
    {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        cin>>arr[i];
        Solution obj;
        cout<<obj.isSorted(arr,N);
        cout<<endl;
    }
    return 0;
}
