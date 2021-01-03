#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int p, q, l, r;
    std :: cin >> p >> q >> l >> r;
    int ans = 0;
    std :: vector <int> a(p), b(p), c(q), d(q), lbl;
    for(int i = 0; i < p; ++i) std :: cin >> a[i] >> b[i];
    for(int i = 0; i < q; ++i) std :: cin >> c[i] >> d[i];
    if(b[p-1] < c[0] + l){
        std :: cout << 0;
        return 0;
    }
    for(int i = l; i < l; ++i){
        for(int j = 0; j < p; ++j){
            if(c[i] + l >= )
        }
    }
    return 0;
}