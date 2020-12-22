#include <iostream>
#define ll long long
#define M 1000000007

using namespace std;

int main(){
    ll x, y, n;
    cin>>x>>y;
    cin>>n;
    if(n%6 == 1){
        if((x)%M >= 0) cout<<(x)%M;
        else cout<<(M + (x)%M);
    }
    else if(n%6 == 2){
        if((y)%M >= 0) cout<<(y)%M;
        else cout<<(M + (y)%M);
    }
    else if(n%6 == 3){
        if((y-x)%M >= 0) cout<<(y-x)%M;
        else cout<<(M + (y-x)%M);
    }
    else if(n%6 == 4){
        if((-x)%M >= 0) cout<<(-x)%M;
        else cout<<(M + (-x)%M);
    }
    else if(n%6 == 5){
        if((-y)%M >= 0) cout<<(-y)%M;
        else cout<<(M + (-y)%M);
    }
    else{
        if((-y+x)%M >= 0) cout<<(-y+x)%M;
        else cout<<(M + (-y+x)%M);
    }
    return 0;
}