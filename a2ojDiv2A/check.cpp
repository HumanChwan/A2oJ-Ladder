#include<iostream>

using namespace std;
 
int main() {
    int n, m, k;
    int x[m+1], p=0;
    cin >> n >> m >> k;
    for(int i=0; i <= m; i++) 
        in >> x[i];
    for(int i=0; i < m; i++) {
        int t=0;
        for(int j=0; j < n; j++) 
            if((x[i]>>j & 1) != (x[m]>>j & 1)) 
                t++;
        if(t <= k) 
        p++;
    } 
    cout << p;
    return 0;
}