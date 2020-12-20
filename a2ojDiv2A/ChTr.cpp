#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    if (b >= a*m){
        cout<<a*n;
    }
    else{
        int f = 0;
        f += (floor(n/m)*b);
        if (b > (n%m)*a){
            f += (n%m)*a;
        }
        else{
            f += b;
        }
        cout<<f;
    }
    return 0;
}