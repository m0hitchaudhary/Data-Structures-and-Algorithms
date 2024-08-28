#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int greaterThanX(int arr[],int n,int x)
    {
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > x){
                count++;
            }
        }
        return count;
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
        int x;
        cin>>x;
        Solution ob;
        cout<<ob.greaterThanX(arr,N,x);
        cout<<endl;
    }
    return 0;
}
