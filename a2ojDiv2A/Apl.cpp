#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, k;
    cin>>n;
    char e[n][n];
    fl(i, 0, n) fl(j, 0, n) cin>>e[i][j];
    fl(i, 0, n){
        fl(j, 0, n){
            k = 0;
            if(i>0 && i<n-1){
                if(e[i+1][j] == 'o') k++;
                if(e[i-1][j] == 'o') k++;
            }
            if(j>0 && j<n-1){
                if(e[i][j+1] == 'o') k++;
                if(e[i][j-1] == 'o') k++;
            }
            if(i == 0) if(e[i+1][j] == 'o') k++;
            if(i == n-1) if(e[i-1][j] == 'o') k++;
            if(j == 0) if(e[i][j+1] == 'o') k++;
            if(j == n-1) if(e[i][j-1] == 'o') k++;
            if(k == 1 || k == 3){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}