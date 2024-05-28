#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string str){
    int decimal = 0;
    int power = 0;
    
    for(int i = str.length()-1; i>=0; i--){
        if(str[i] == '1'){
            decimal += pow(2, power);
        }
        power++;
    }
    
    return decimal;
}

int main() {
    
    string str;
    
    getline(cin, str);
    
    cout<<binaryToDecimal(str);
    
}
