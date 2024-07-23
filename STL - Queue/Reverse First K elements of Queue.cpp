#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    queue<int> modifyQueue(queue<int> q, int k) {

        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(), v.begin()+k);
        for(int i=0; i<v.size(); i++){
            q.push(v[i]);
        }
        
        return q;
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
