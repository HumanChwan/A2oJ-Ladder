#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p[101], q[101];
    p[0] = 100; 
    q[0] = 100;
    int a[200];
    int k = 0;
    for(int i = 0; i < p[0]+1; i++){
        cin>>p[i];
        if (i != 0){
            a[k] = p[i];
            k++;
        }
    }
    for(int i = 0; i < q[0]+1; i++){
        cin>>q[i];
        if (i != 0){
            a[k] = q[i];
            k++;
        }
    }
    sort(a, a + k);
    bool b[n];
    for(int i = 0; i < n; i++){
        b[i] = false;
    }
    int i = 1, id = 0;
    while (true){
        if(i == a[id]){
            b[i-1] = true;
            if(i == n){
                cout<<"I become the guy.";
                break;
            }
            i++;
            id++; 
        }
        else if(i < a[id]){
            cout<<"Oh, my keyboard!";
            break;
        }
        else{
            id++;
        } 
    }
    return 0;
}