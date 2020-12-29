#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int m[3][3], s[3];
    fl(i, 0, 3){
        cin>>m[i][0]>>m[i][1]>>m[i][2];
        s[i] = m[i][0]+m[i][1]+m[i][2];
    } 
    m[0][0] = (s[0] + s[1] + s[2])/2 - s[0];
    m[1][1] = (s[0] + s[1] + s[2])/2 - s[1];
    m[2][2] = (s[0] + s[1] + s[2])/2 - s[2];
    /*m[0][0] = ((m[1][0]+m[2][0]) + (m[2][1]-m[0][1]) + (m[1][2]-m[0][2]))/2;
    m[1][1] = ((m[2][0]-m[1][0]) + (m[2][1]+m[0][1]) + (m[0][2]-m[1][2]))/2;
    m[2][2] = ((m[1][0]-m[2][0]) + (m[0][1]-m[2][1]) + (m[1][2]+m[0][2]))/2;*/
    fl(i, 0, 3) cout<<m[i][0]<<" "<<m[i][1]<<" "<<m[i][2]<<"\n";
    return 0;
}
