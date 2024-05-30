#include <iostream>
using namespace std;

class Cuboid 
{

   public:
   int length;
   int width;
   int height;
   
   void display(){
       cout<<length<<" "<<width<<" "<<height<<"\n";
   }
};

class CuboidVol: public Cuboid
{

    public:
    void read_input(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }
    void display(){
        cout<<length*width*height<<"\n";
    }
};

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int l, w, h;
        cin>>l>>w>>h;
    
    CuboidVol c_vol;
    
    c_vol.read_input(l,w,h);
    
    c_vol.Cuboid::display();
     
    c_vol.display();
    }
    
    return 0;
}
