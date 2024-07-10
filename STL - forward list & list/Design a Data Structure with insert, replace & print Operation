#include <bits/stdc++.h>
using namespace std;

list<int> l;

void insert(int x){
    l.push_back(x);
}

void print(){
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }
}

void replace(int x, vector<int> s){
    auto it = find(l.begin(), l.end(), x);
    if(it != l.end()){
        l.insert(it, s.begin(), s.end());
        l.erase(it);
    }
}

int main(){
    
    int t; cin>>t;
    while(t-- > 0){
        int q;
        cin>>q;
        while(q-- > 0){
            int choice, x;
            cin>>choice;
            if(choice == 1){
                cin>>x;
                insert(x);
            }
            else if( choice  == 2){
                print();
                cout<<"\n";
            }
            else{
                int n;
                cin>>x>>n;
                vector<int> sequence;
                for(int i = 0;i<n;i++){
                    int temp;
                    cin>>temp;
                    sequence.push_back(temp);
                }
                replace(x, sequence);
            }
        }
        
    }
    
    return 0;
}
