#include <bits/stdc++.h>
using namespace std;

void push_pq(priority_queue<int, vector<int>, greater<int>> &pq, int x){
    pq.push(x);
}

void pp_pq(priority_queue<int, vector<int>, greater<int>> &pq){
   
    if(!pq.empty()){
        pq.pop();
    }
    else
        return;
    
}

int pq_top(priority_queue<int, vector<int>, greater<int>> &pq){
    
    if(!pq.empty())
    return pq.top();
    else
        return -1;
    
}

int main() {
    
    int testcase;
    cin >> testcase;

    priority_queue<int, vector<int>, greater<int>> pq; 
    
    while(testcase--){
        int queries;
        cin >> queries;
        
        while(queries--){
            
            string s;
            cin >> s;

            if(s == "p"){
                int x;
                cin >> x;
                push_pq(pq, x);
                cout << pq.size() << endl;
            }

            if(s == "pp"){
                pp_pq(pq);
                
                cout << pq.size() << endl;
            }

            if(s == "t"){
                cout << pq_top(pq) << endl;
            }
        }

        pq = priority_queue <int, vector<int>, greater<int>>();
    }
    
    return 0;
}
