#include <iostream>
#include <vector>


int main(){
    int n;
    std :: cin >> n;
    std :: vector<std :: string> sn, se;
    std :: string t;
    for(int i = 0; i < n; i++){
        std :: cin >> t;
        if(t[0] == '!') se.push_back(t);
        else sn.push_back(t);
    }
    int es = se.size(), ns = sn.size(); 
    if(es == 0 || ns == 0){
        std :: cout << "satisfiable";
        return 0;
    }
    for(int i = 0; i < ns; i++){
        t = "";
        t = '!' + sn[i]; 
        for(int j = 0; j < es; j++){
            if(t == se[j]){
                std :: cout << sn[i];
                return 0;
            }
        }  
    }
    std :: cout << "satisfiable";
    return 0;
}