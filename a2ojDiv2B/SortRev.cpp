#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], s[n];
    int t;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        s[i] = a[i];
    }
    sort(s, s+n); 
    int start = 1, end = 1;
    for (int i = 0; i < n; i++){
        if(s[i] != a[i]){
            start = i+1;
            break;
        }
    }
    for (int i = n-1; i > 0; i--){
        if(s[i] != a[i]){
            //cout<<s[i]<<a[i]<<endl;
            end = i+1;
            break;
        }
    }
    //cout<<start<<end<<endl;
    for(int i = start-1; i <= floor((end+start-2)/2); i++){
        t = a[i];
        a[i] = a[end-(i-start+1)-1];
        a[end-(i-start+1)-1] = t;
    }
    bool p = true;
    for(int i = 0; i < n; i++){
        //cout<<a[i];
        if(s[i] != a[i]){
            p = false;
            break;
        }
    }
    if(p){
        cout<<"yes"<<endl;
        cout<<start<<" "<<end;
    }
    else{
        cout<<"no";
    }
    return 0;
}