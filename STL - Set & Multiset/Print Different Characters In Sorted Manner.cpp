#include <bits/stdc++.h>
using namespace std;

string Sorted_Characters(string str)
{
    set<char> s;
    for(int i=0; i<str.size(); i++){
        s.insert(str[i]);
    }
    string str1 = "";
    for(auto it=s.begin(); it != s.end(); it++){
        str1 += (*it);
    }
    return str1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
        string str;
        cin>>str;
        
        string result;
        result = Sorted_Characters(str);
        cout<<result<<endl;
    }
    return 0;
}
