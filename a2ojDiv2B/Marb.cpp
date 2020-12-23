#include <iostream>
#include <vector>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, s, t, tp;
    cin>>n>>s>>t;
    int a[n];
    fl(i, 0, n){
        cin>>a[i];
        if(i == s-1 && a[i] == s && s != t){
            cout<<-1;
            return 0;
        }
        if(s == t){
            cout<<0;
            return 0;
        }
        if(i == s-1 && a[i] == t){
            cout<<1;
            return 0;
        }
    }
    //inp = 1;
    tp = a[s-1];
    fl(i, 0, n-1){
        if(tp == t){
            //cout<<inp;
            cout<<i+1;
            return 0;
        }
        else{
            tp = a[tp-1];
            //inp++;
            if(tp == s){
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}