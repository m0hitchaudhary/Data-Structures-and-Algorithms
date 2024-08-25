#include <iostream>
using namespace std;

void findptr(string str, string pat){
    int found = str.find(pat);
    while(found != string::npos){
        cout<<"Pattern found at "<<found<<"\n";
        found = str.find(pat, found+1);
    }
}

int main() {
    
    string str, pat;
    
    cin>>str>>pat;
    
    findptr(str, pat);

    return 0;
}
