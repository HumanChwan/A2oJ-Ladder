#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, m, l;
    cin>>n>>m;
    if(n%2 == 0){
        l = (n/2);
    }
    else{
        l = floor(n/2) + 1;
    }
    if (l % m == 0){
        cout<<l;
    }
    else if((l + (m - (l%m))) <= n){
        cout<<(l + (m - (l%m)));
    }
    else{
        cout<<-1;
    }
    return 0;
}