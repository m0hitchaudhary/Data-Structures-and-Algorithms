#include<bits/stdc++.h>
using namespace std;

template <class T>
class minElement
{
    T y;
    public:
    minElement(T y1){
        y = y1;
    }
    T check(T x){
        T res = (y < x) ? y : x;
        cout<<res<<"\n";
    }
};

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
          string a,b;
          cin>>a>>b;
          minElement<string>obj1(a);
          obj1.check(b);
        }
        else if(c==2)
        {
          int a,b;
          cin>>a>>b;
          minElement<int>obj2(a);
          obj2.check(b);
        }
    }
}
