#include<bits/stdc++.h>
using namespace std;

void corres_Pair(int arr1[], int arr2[], int N, pair<int, int> res[])
{
    for(int i=0; i<N; i++){
        res[i] = pair<int, int>(arr1[i], arr2[i]);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr1[N],arr2[N];
        
        for(int i = 0; i < N; i++)
            cin>>arr1[i];
        for(int i = 0; i < N; i++)
            cin>>arr2[i];
        
        
        pair<int, int> res[N];
        corres_Pair(arr1, arr2, N, res);
        for(int i = 0; i < N; i++)
            cout << "(" << res[i].first << "," << res[i].second <<")";
        cout << endl;
    }
}
