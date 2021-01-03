#include <iostream>
#include <vector>

int main(){ 
    int n, len = 2, tmp = 2;
    std :: cin >> n;
    std :: vector<int> a(n);
    for(auto& ai : a) std :: cin >> ai;
    if(n <= 2){
        std :: cout << n;
        return 0;
    }
    int i = n-2;
    while(i > 0){
        if(a[i-1] == a[i+1] - a[i]){
            
            tmp++;
            --i;
            if(!i){
                if(tmp > len) len = tmp;
                break;
            }
            continue;
        }
        else{
            if(tmp > len) len = tmp;
            if(len > n/2) break;
            i--;
            if(i == 0) break;
            tmp = 2;
        }
    }
    std :: cout << len;
    return 0;
}