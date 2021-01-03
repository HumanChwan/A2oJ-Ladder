#include <iostream>
#include <vector>

int main(){
    int n, m, t1, t2;
    std :: cin >> n >> m;
    std :: vector<bool> mc(n, false);
    for(int i = 0; i < m; ++i){
        std :: cin >> t1 >> t2;
        mc[t1-1] = true;
        mc[t2-1] = true;
    }
    for(int i = 0; i < n; i++){
        if(!mc[i]){
            std :: cout << n-1 << "\n";
            for(int j = 0; j < n; ++j){
                if(j != i) std :: cout << i+1 << " " << j+1 << std :: endl; 
            }
            return 0;
        }
    }
    std :: cout << 2 * (n-2) << std :: endl;
    for(int i = 0; i < n-2; ++i){
        if(i+1 != t1 && i+1 != t2){
            std :: cout << t1 << " " << i+1 << std :: endl;
            std :: cout << t2 << " " << i+1 << std :: endl;
        }
    }
    return 0;
}