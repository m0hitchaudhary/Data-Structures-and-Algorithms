#include<iostream>
#include<algorithm>
using namespace std;

bool anagram(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    
    int arr[26] = {0};
    
    for(int i=0; i<s1.length(); i++){
        char x = tolower(s1[i]) - 'a';
        arr[x]++;
    }
    
    for(int i=0; i<s2.length(); i++){
        char x = tolower(s2[i]) - 'a';
        arr[x]--;
    }
    
    for(int i=0; i<26; i++){
        if(arr[i] != 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    
    cout<<anagram(s1, s2);
}
