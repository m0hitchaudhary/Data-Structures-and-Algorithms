#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> Arr, int X){
    int freq = 0;
    for(auto &ele : Arr){
        if(ele == X){
            freq++;
        }
    }
    return freq;
}

int main() {
    
    int testcase;
    
    cin >> testcase;
    
    while(testcase--){
        int N;
        cin >> N;

        vector<int> Arr;

        for(int i = 0;i<N;i++){
            int k;
            cin >> k;
            Arr.push_back(k);
        }

        int X;
        cin >> X;
        cout << findFrequency(Arr, X) << endl;
    }
    
    return 0;
}
