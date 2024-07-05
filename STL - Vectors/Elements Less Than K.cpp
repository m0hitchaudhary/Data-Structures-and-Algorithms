#include <bits/stdc++.h>
using namespace std;

vector<int> list_less_than_k(vector<int> a,int n,int k)
{
    vector<int> result;
    for(auto &x : a){
        if(x < k){
            result.push_back(x);
        }
    }
    return result;
}

int main()
{
    int testcase;
    
    cin >> testcase;
    
    while(testcase--){
        int N;
        cin >> N;

        vector<int> a(N);

        for(int i = 0;i<N;i++){
            cin>>a[i];
        }
        
        int k;
        cin>>k;
        
        vector<int>result = list_less_than_k(a,N,k);
        
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
