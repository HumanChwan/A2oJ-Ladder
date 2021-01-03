#include <iostream>
#include <vector>

int main(){
    int n;
    long long sum = 0, t;
    std :: cin >> n >> t;
    std :: vector<int> a(n);
    for(auto& ai : a) std :: cin >> ai;
    int start = 0, ct = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum <= t) ct++;
        else sum -= a[start], start++;
    }
    std :: cout << ct;
    return 0;
}