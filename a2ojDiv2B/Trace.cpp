#include <iostream>
#include <vector>
#include <algorithm>
#define PI 3.1415926535897

int main(){
    int n;
    std :: cin >> n;
    std :: vector<int> r(n);
    int sum = 0;
    for(auto& ri : r) std :: cin >> ri;
    if(n == 1){
        std :: cout << std :: fixed << (double)(r[0]*r[0]) * PI;
        return 0;
    }
    std :: sort (r.begin(), r.end(), std :: greater<int>());
    for(int i = 0; i < n; ++i){
        if(i & 1) sum -= r[i]*r[i];
        else sum +=r[i]*r[i];
    }
    std :: cout << std :: fixed << (double)sum * PI;
    return 0;
}