#include <iostream>
#include <vector>
using namespace std;

void ShrinkMe(vector<int> myvector, int newsize){
    cout<<myvector.capacity();
    cout<<endl;
    
    myvector.resize(newsize);
    myvector.shrink_to_fit();
    
    cout<<myvector.capacity();
}

int main ()
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int newsize;
        cin>>newsize;
        vector<int> myvector(size);
        ShrinkMe(myvector, newsize);
        cout<<endl;
    
    }
  return 0;
}
