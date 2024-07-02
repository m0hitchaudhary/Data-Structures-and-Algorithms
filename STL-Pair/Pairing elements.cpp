#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> array_of_Pairs(int arr[], int n)
{
    vector<pair<int, int>> result;
    int k=0;
    if(n%2 != 0){
        k = (n/2) + 1;
    }else{
        k = n/2;
    }
    for(int i=0; i<k; i++){
        result.push_back(pair<int, int>(arr[i], arr[n-i-1]));
    }
    return result;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N;

        cin>>N;
        
        int arr[N];

        for(int i = 0; i < N; i++)
            cin>>arr[i];

        vector<pair<int, int>> res = array_of_Pairs(arr, N);
        
        for(int i = 0; i < res.size(); i++)
        {
            cout << "("<< res[i].first << "," <<res[i].second << ") ";
        }
        cout << endl;
        
    }
    return 0;
}
