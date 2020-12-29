#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, c, m = 0, t1, t2;
    cin>>n>>c;
    fl(i, 0, n){
        cin>>t1;
        if(i != 0) if(m < t2-t1) m = t2-t1;
        t2 = t1;
    }
    if(m > c) cout<<m-c;
    else cout<<0;
    return 0;
}