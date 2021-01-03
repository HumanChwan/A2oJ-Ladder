#include <iostream>
#include <vector>

int main(){
    int n, k, m = 0, M = 0;
    std :: cin >> n >> k;
    std :: vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std :: cin >> a[i];
        if(i == 0) m = a[i], M = a[i];
        if(m > a[i]) m = a[i];
        if(M < a[i]) M = a[i];
    } 
    if(M - m > k){
        std :: cout << "NO";
        return 0; 
    }
    std :: cout << "YES\n";
    for(auto& ai : a){
        for(int i = 1; i <= ai; ++i){
            if (i < ai){
                if (i%k == 0) std :: cout << k << " ";
                else if(i > k) std :: cout << (i%k) << " ";
                else std :: cout << i << " ";
            }
            else{
                if (i%k == 0) std :: cout << k << "\n";
                else if(i > k) std :: cout << (i%k) << "\n";
                else std :: cout << i << "\n";
            }
        }
    }
    return 0;
}