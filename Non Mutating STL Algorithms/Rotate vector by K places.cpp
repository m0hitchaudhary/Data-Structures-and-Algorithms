#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> &v, int k)
{
    rotate(v.begin(), v.begin() + k, v.end());
    return v;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, K,val;
        cin>>N>>K;
        
        vector<int> vec(N);
        for(int i = 0; i < N; i++)
        {
            cin>>val;
            vec[i] = val;
        }
        
        vec = leftRotate(vec, K); 
        for(auto itr = vec.begin(); itr != vec.end(); itr++)
            cout << *itr << " ";
        cout <<endl;
        
        
    }
}
