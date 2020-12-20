#include <iostream>
#include <math.h>
#define fl(a, b) for(int i = a; i < b; i++)
#define ll long long

using namespace std;

bool Prime(int x){
    fl(2, x){
        if(x%i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    ll int a[n];
    double t;
    fl(0, n) cin>>a[i];
    fl(0, n){
        if(a[i] == 1){
            cout<<"NO"<<endl;
            continue;
        }
        t = sqrt(a[i]);
        if (t != floor(t)){
            cout<<"NO"<<endl;
        }
        else{
            if(Prime(t)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}