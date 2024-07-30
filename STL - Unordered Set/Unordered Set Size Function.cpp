#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int SizeMe(unordered_set<string> myset){
    return myset.size();
}

int main ()
{
  int t;
  cin>>t;
  
  while(t--){
  string str;
  cin>>str;
  unordered_set<string> myset;
  myset.insert(str);
  cout<<SizeMe(myset)<<endl;
  }
  
  return 0;
}
