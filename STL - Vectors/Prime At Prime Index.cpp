#include <bits/stdc++.h>
using namespace std;

static bool isPrime(int &a){
    
    if(a == 1) return false;
    
    for(int i=2; i <= sqrt(a); i++){
        if(a%i == 0) return false;
    }
    
    return true;
}

vector<int> prime_at_prime(vector<int> &v)
{
    vector<int> result;
    
    for(int i=0; i<v.size(); i++){
        int idx = i+1;
        if(isPrime(idx) && isPrime(v[i])){
            result.push_back(v[i]);
        }
    }
    
    return result;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            v.push_back(m);
        }
        vector<int>result=prime_at_prime(v);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
