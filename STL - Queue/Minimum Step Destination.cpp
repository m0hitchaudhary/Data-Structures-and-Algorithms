#include<bits/stdc++.h>
using namespace std;

int minimum_distance(int sx, int sy, int dx, int dy) {

    int dx_dist = dx - sx;
    int dy_dist = dy - sy;

    if (dx_dist < 0 || dy_dist < 0) {
        return -1;
    }

    return dx_dist + dy_dist;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
       
       int sx,sy;
       cin>>sx>>sy;
       int dx,dy;
       cin>>dx>>dy;
       
       int dis = minimum_distance(sx,sy,dx,dy);
       cout<<dis<<endl;
    }
}
