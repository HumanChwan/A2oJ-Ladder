#include <iostream>
#include <vector>

int main(){
    int n, k, ct = 0;
    int s;
    std :: cin >> n >> k;
    for(int i = 0; i < n; ++i){
        std :: cin >> s;
        std :: vector<bool> kb(k+2, false);
        for(; s > 0; s /= 10){
            if(s%10 <= k) kb[s%10] = true;
        }
        for(int j = 0; j < k+1; j++){
            if(!kb[j]){
                kb[k+1] = true;
                break;
            } 
            
        }
        if(kb[k+1]) continue;
        ct++;
    }
    std :: cout << ct;
    return 0; 
}