#include <cstdio>
//#include <algorithm>
#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int Occ(int arr[], int x, int l){
    
}
int main(){
    int n;
    sf("%d", &n);
    int x[n], y[n];
    fl(i, 0, n) sf("%d %d", &x[i], &y[i]);
    int t;
    sort(x, x+n);
    fl(i, 0, n){
        //fl(j, 0, n) if(y[i] == x[j]) t++;
        t = Occ(x, y[i], n);
        pf("%d %d\n", (n-1 + t), (n-1 - t));
    }
    return 0;
}