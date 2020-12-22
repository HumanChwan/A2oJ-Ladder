#include <iostream>
#define ll long long

using namespace std;

int main(){
    int n, idl = 0, t = 0, ct = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(i == 0) t = a[i];
        if(t >= a[i]){
            if(t == a[i]) ct++;
            t = a[i];
            idl = i;
        }
    }
    if(ct == n) idl = 0;
    t = 0;
    for(int i = 0; i < n-1; i++){
        if(idl + i < n - 1){
            if(a[idl + i] > a[idl + i + 1]){
                cout<<-1;
                return 0;
            }
        }
        else if(idl + i == n - 1){
            if(a[n-1] > a[0]){
                cout<<-1;
                return 0;
            }
        }
        else{
            if(a[idl + i - n] > a[idl + i - n + 1]){
                cout<<-1;
                return 0;
            }
        }
    }
    if(idl != 0) cout<<(n-idl);
    else cout<<0;
    return 0;
}