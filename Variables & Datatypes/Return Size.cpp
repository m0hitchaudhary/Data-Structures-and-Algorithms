#include<bits/stdc++.h>
using namespace std;

template <typename T>
int sizeOfValue(T value){
 
     int ans =    sizeof(value) ;
     return ans;
 }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            double a;
            cin>>a;
            cout<<sizeOfValue<double>(a);
            
        }
        else if(c==2)
        {
            int a;
            cin>>a;
            cout<<sizeOfValue<int>(a);
            
        }
        else
        {
            char a;
            cin>>a;
            cout<<sizeOfValue<char>(a);
    
        }
        cout<<endl;
    }
}
