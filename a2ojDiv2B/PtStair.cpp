#include <iostream>
#include <vector>
//#include <algorithm>

int main(){
    int n, m, t;
    std :: cin >> n >> m;
    std :: vector<bool> dc(n);
    for(int i = 0; i < m; i++){
        std :: cin >> t;
        dc[t-1] = true;
    }
    if(dc[n-1] || dc[0]){
        std :: cout << "NO";
        return 0;
    }
    int i = 0;
    while(true){
        if(dc[i+1] && dc[i+2] && dc[i+3]){
            std :: cout << "NO";
            return 0;
        }
        if(!dc[i+3]) i += 3;
        else if(!dc[i+2]) i += 2;
        else i++;
        if(i >= n-4){
            std :: cout << "YES";
            return 0;
        }
    }
}