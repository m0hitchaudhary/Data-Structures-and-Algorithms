#include<bits/stdc++.h>
using namespace std;

void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    while(it1 != it2){
        cout<<(*it1)<<" ";
        it1++;
    }
    cout<<endl;  
}

int main() {
    
    int testcase;
    cin >> testcase;
    
    while(testcase--){
        int N;
        cin >> N;

        vector<int> v;

        for(int i = 0;i<N;i++){
            int k;
            cin >> k;
            v.push_back(k);
        }

        reverseIterator(v.rbegin(), v.rend());
        
    }

    return 0;
}
