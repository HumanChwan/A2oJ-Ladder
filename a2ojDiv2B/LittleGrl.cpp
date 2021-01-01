#include <iostream>
#include <algorithm>
//#include <vector>
//#include <utility>
#define pb push_back

int main(){
    std :: string s;
    std :: cin >> s;
    int n = s.length();
    std :: sort(s.begin(), s.end());
    int oddocc = 0;
    int ct = 0;
    for(int i = 0; i < n-1; ++i){
        if(s[i] == s[i+1]){
            ct++;
            if(i == n-2){
                ct++;
                if(ct & 1) oddocc++;
            }
        }
        else{
            ct++;
            if(ct & 1) oddocc++;
            if(i == n-2) oddocc++;
            ct = 0;
        }
    }
    if(!oddocc){
        std :: cout << "First";
        return 0;
    }
    n -= oddocc - 1;
    if(oddocc & 1) std :: cout << "First";
    else std :: cout << "Second";
    return 0;
}