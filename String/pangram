#include <iostream>
using namespace std;

bool pangram(string s){
    
    int size = s.length();
    if(size < 26){
        return false;
    }
    
    bool arr[26] = {0};
    
    for(int i=0; i<26; i++){
        char x = s[i];
        if(x >= 'a' && x <= 'z'){
            x = s[i] - 'a';
            arr[x] = true;
        }
        if(x >= 'A' && x  <= 'Z'){
            x = s[i] - 'A';
            arr[x] = true;
        }
    }
    
    for(int i=0; i<26; i++){
        if(arr[i] == false){
            return false;
        }
    }
    
    return true;
}

int main() {
    
    string s1;
    getline(cin, s1);
    
    cout<<pangram(s1);

    return 0;
}
