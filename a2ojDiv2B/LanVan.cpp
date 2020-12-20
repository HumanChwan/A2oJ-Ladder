#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l;
    cin>>n>>l;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    if(n != 1){
        double m = a[1] - a[0];
        for(int i = 1; i < n; i++){
            if(m < a[i] - a[i-1]){
                m = a[i] - a[i-1];
            }
        }
    }
    else{
        int m = 1;
    }
    if((m/2) <= a[0] && a[0] >= l - a[n-1]){ 
        cout<<fixed<<a[0];
    } 
    else if((m/2) <= l - a[n-1]){
        cout<<fixed<<l - a[n-1];
    }
    else{
        cout<<fixed<<(m/2);
    }
    return 0;
}