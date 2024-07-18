#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool match(char a, char b){
        if(a == '(' && b == ')'){
            return true;
        }
        if(a == '{' && b == '}'){
            return true;
        }
        if(a == '[' && b == ']'){
            return true;
        }
    }
    
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0; i<x.size(); i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                s.push(x[i]);
            }else if(x[i] == ')' || x[i] == '}' || x[i] == ']'){
                if(s.empty()) return false;
                if(match(s.top(), x[i]) == false) return false;
                s.pop();
            }
        }
        if(s.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
