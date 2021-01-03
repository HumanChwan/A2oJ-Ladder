#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, t;
    std :: vector<int> f, s;
    long long sf = 0, ss = 0;
    //std ::cout << f << " " << s << "hola\n";
    std :: cin >> n;
    for(int i = 0; i < n; ++i){
        std :: cin >> t;
        if(t > 0) f.push_back(t), sf += t;
        else s.push_back(t * (-1ll)), ss -= t;
    }
    if(sf > ss){
        std :: cout << "first";
        return 0;
    }
    else if(ss > sf){
        std :: cout << "second";
        return 0;
    }
    //std :: cout << (char)(1);
    //std :: cout << f << " " << s << " ";
    for(int i = 0; i < std :: min(f.size(), s.size()); ++i){
        if(f[i] > s[i]){
            std :: cout << "first";
            return 0;
        }
        if(s[i] > f[i]){
            std :: cout << "second";
            return 0;
        }
    }
    if(f.size() > s.size()) std :: cout << "first";
    else if(f.size() < s.size()) std :: cout << "second";
    else{
        if(t > 0) std :: cout << "first";
        else std :: cout << "second";
    }
    return 0;
}