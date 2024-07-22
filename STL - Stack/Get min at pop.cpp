#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);
void _getMinAtPop(stack<int>s);

stack<int> _push(int arr[],int n)
{
   stack<int> s;
   for(int i=0; i<n; i++){
       s.push(arr[i]);
   }
   return s;
}

void _getMinAtPop(stack<int>s)
{
    stack<int> s1;
    while(!s.empty()){
        
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        stack<int>mys=_push(arr,n);
        _getMinAtPop(mys);
        
        cout<<endl;
        
    }
    return 0;
}
