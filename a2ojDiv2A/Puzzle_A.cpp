#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int f[m];
    for(int i = 0; i < m ; i++){
        cin>>f[i];
    }
    sort(f, f + m);
    int M =(f[n-1] - f[0]);
    for(int i = 0; i < m - n + 1; i++){
        if (M > (f[i+n-1] - f[i])){
            M  = (f[i+n-1] - f[i]);
        }
    }
    cout<<M;
    return 0;
}