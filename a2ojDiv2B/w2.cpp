#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main(){
    int n;
    std :: cin >> n;
    int k, a[n];
    long long bsum = 0 , asum = 0;
    std :: vector<std :: pair<int, int>> s(n);
    //std :: pair<int, int> p;
    for(int i = 0; i < n; i++){
        std :: cin >> a[i] >> k;
        //p = std :: make_pair(a[i] + k, i);
        s[i] = std :: pair(a[i] + k, i);
        asum += a[i];
    }
    if(n == 1){
        std :: cout << 1;
        return 0;
    }
    std :: sort(begin(s), end(s), std :: greater<int>());
    for(int i = 0; i < n; i++){
        bsum += s[i].first;
        asum -= a[s[i].second];
        std :: cout << s[i].second << "<?-";
        if(bsum > asum){
            //std :: cout << s[1][i] << "<-";
            std :: cout << i+1;
            return 0;
        }
    }
}