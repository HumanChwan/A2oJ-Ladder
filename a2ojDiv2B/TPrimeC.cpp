#include <iostream>
#define fl(a, b, i) for(i = a; i < b; i++)
#define ll long long

using namespace std;

int main(){
    int n;
    cin>>n;
    ll int a[n];
    int ct;
    int i, j;
    fl(0, n, i) cin>>a[i];
    fl(0, n, i){
        ct = 1;
        if(a[i] == 1 || a[i] == 2 || a[i] == 3){
            cout<<"NO"<<endl;
            continue;
        }
        fl(2, (int)(a[i]/2) + 1, j){
            if(a[i]%j == 0){
                ct++;
                if(ct == 3){
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(ct == 2){
            cout<<"YES"<<endl;
        }
        else if(ct < 2){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}