#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            cout<<"NO"<<endl;
            continue;
        }
        int t = sqrt(a[i]);
        bool f = true;
        for(int j = 2; j*j <= t; j++){
            if(t%j == 0){
                f = false;
                break;
            }
        }
        if(f && ((float)a[i]/t == t)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}