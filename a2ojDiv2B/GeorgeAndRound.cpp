#include <iostream>
#include <vector>

int main(){
    int n, m;
    std :: cin >> n >> m;
    std :: vector<int> req(n);
    std :: vector<int> prep(m);
    for(auto& rqi : req) std :: cin >> rqi;
    for(auto& ppi : prep) std :: cin >> ppi;
    int tbm = n;
    int i = 0, j = 0;
    while(i < n){
        int tp = i;
        for(; j < m; ++j){
            if(req[i] <= prep[j]){
                --tbm;
                i++;
                j++;
                break;
            }
        }
        if(tp == i) {
            break;
        }
    }
    std :: cout << tbm;
    return 0;
}