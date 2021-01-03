#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, m, t;
    std :: cin >> n >> m;
    std :: vector<int> neg;
    for(int i = 0; i < n; ++i){
        std :: cin >> t;
        if(t < 0) neg.push_back(t * (-1));
    }
    if(!neg.size()){
        std :: cout << 0;
        return 0;
    }
    int sum = 0, minm = std :: min((int)neg.size(), m);
    std :: sort(neg.begin(), neg.end(), std :: greater<int>());
    for(int i = 0; i < minm; ++i){
        if(i == m) break;
        sum += neg[i];
    }
    std :: cout << sum;
    return 0;
}