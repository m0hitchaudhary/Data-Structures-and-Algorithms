#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _pop(stack<int>s);

stack<int>_push(int arr[],int n)
{
   stack<int> st;
   for(int i=0; i<n; i++){
       st.push(arr[i]);
   }
   return st;
}

void _pop(stack<int> s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
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
        _pop(mys);
        cout<<endl;       
    }
    return 0;
}
