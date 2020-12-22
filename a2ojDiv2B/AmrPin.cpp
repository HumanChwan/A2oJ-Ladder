#include <iostream>
#include<math.h>
#define ll long long

using namespace std;

int main(){
    ll r, x, y, x1, y1;
    cin>>r>>x>>y>>x1>>y1;
    //cout<<(x-x1)*(x-x1) + (y-y1)*(y-y1);
    double dist = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
    //cout<<dist;
    cout<<ceil(dist/(2*r));
    return 0;
}
