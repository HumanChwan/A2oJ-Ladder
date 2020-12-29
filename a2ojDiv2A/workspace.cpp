//#include <iostream>
#include <cstdio>
#include <algorithm>
//#include <vector>
//#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    sf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int an = (min(min((k*l)/nl, (c*d)), min((c*d), p/np)))/n;
    pf("%d", an);
    return 0;
}