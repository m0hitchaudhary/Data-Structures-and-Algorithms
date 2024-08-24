#include <iostream>
#include<algorithm>
using namespace std;

char findExtra(string s1, string s2){
    int arr[256] = {0};
    
    for(char c : s2){
        arr[c]++;
    }
    
    for(char c : s1){
        arr[c]--;
    }
    
    for(int i=0; i<256; i++){
        if(arr[i] == 1){
            return (char)i;
        }
    }
    
    return 0;
}

int main() {
    
    string s1, s2;
    cin>>s1>>s2;
    
    cout<<findExtra(s1, s2);

    return 0;
}

//--------------------------Bitwise Approach-------------------------//

char findExtra(string s1, string s2){
    
    int size = s1.length();
    int res = 0;
    for(int i=0; i<size; i++){
        res = res ^ s1[i] ^ s2[i];
    }
    
    res = res ^ s2[size];
    
    return (char)res;
    
}
