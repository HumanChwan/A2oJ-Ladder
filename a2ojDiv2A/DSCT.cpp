#include <iostream>

using namespace std;

int main(){
    int n, d, s = 0, t;
    cin>>n>>d;
    for(int i = 0; i < n; i++){
        cin>>t;
        s += t;
    }
    int nj = (n-1) * 2;
    if(((nj*5) + s) > d){
        cout<<-1;
    }
    else{
        t = d - ((nj*5) + s);
        nj += (t/5);
        cout<<nj;
    }
    return 0;
}