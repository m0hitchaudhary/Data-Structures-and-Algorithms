#include <iostream>
#include<algorithm>
using namespace std;

string decimalToBinary(int n){
    string str = "";
    while(n>0){
        int rem = n%2;
        str += to_string(rem);
        n /= 2;
    }
    
    reverse(str.begin(), str.end());
    
    return str;
}

int main() {
    
    int n;
    cin>>n;
    
    cout<<decimalToBinary(n);

    return 0;
}
