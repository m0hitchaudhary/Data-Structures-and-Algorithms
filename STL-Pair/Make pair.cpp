#include <bits/stdc++.h>
using namespace std;

pair<int, int> makePair(int x, int y)
{
    return pair<int, int>(x, y);
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int X, Y;
        cin>>X>>Y;
        pair<int, int> ans = makePair(X, Y);
        cout <<"("<< ans.first << "," << ans.second <<")"<< endl;
    }
    return 0;
}
