#include <iostream>
using namespace std;

void reverse_dig(int &a,int &b)
{
    int na = 0;
    int nb = 0;
    
    while(a>0){
        int rem = a%10;
        na = na*10 + rem;
        a /= 10;
    }
    while(b>0){
        int rem = b%10;
        nb = nb*10 + rem;
        b /= 10;
    }
    
    a = na;
    b = nb;
}

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
    
        reverse_dig(a,b);
        swap(a,b);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
