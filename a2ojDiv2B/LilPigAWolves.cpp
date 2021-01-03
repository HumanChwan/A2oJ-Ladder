#include <iostream>
#include <vector>

int main(){
    int n, m;
    std :: cin >> n >> m;
    std :: vector<std :: vector<char>> grd(n, std :: vector<char>(m, '.'));
    for(auto& gi : grd) for(auto& gij : gi) std :: cin >>  gij;
    int a = 0;
    if(n == 1 && m == 1){
        std :: cout << 0;
        return 0;
    }
    else if(n == 1 && m != 1){
        for(int i = 0; i < m; ++i){
            if(grd[0][i] == 'W'){
                if(i == 0){
                    if(grd[0][i+1] == 'P') a++;
                }
                else if(i == m-1){
                    if(grd[0][i-1] == 'P') a++;
                }
                else{
                    if(grd[0][i+1] == 'P' || grd[0][i-1] == 'P') a++;
                }
            }
        }
        std :: cout << a;
        return 0;
    }
    else if(m == 1 && n != 1){
        for(int i = 0; i < n; ++i){
            if(grd[i][0] == 'W'){
                if(i == 0){
                    if(grd[i+1][0] == 'P') a++;
                }
                else if(i == n-1){
                    if(grd[i-1][0] == 'P') a++;
                }
                else{
                    if(grd[i+1][0] == 'P' || grd[i-1][0] == 'P') a++;
                }
            }
        }
        std :: cout << a;
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            if(grd[i][j] == 'W'){
                if((i > 0 && i < n-1) && (j > 0 && j < m-1)){
                    if(grd[i-1][j] == 'P' || grd[i][j-1] == 'P' || grd[i+1][j] == 'P' || grd[i][j+1] == 'P') a++;
                }
                else if((!i) && (j > 0 && j < m-1)){
                    if(grd[i][j-1] == 'P' || grd[i+1][j] == 'P' || grd[i][j+1] == 'P') a++;          
                }
                else if((i > 0 && i < n-1) && (!j)){
                    if(grd[i-1][j] == 'P' || grd[i+1][j] == 'P' || grd[i][j+1] == 'P') a++;          
                }
                else if((i == n-1) && (j > 0 && j < m-1)){
                    if(grd[i][j-1] == 'P' || grd[i-1][j] == 'P' || grd[i][j+1] == 'P') a++;          
                } 
                else if((i > 0 && i < n-1) && (j == m-1)){
                    if(grd[i-1][j] == 'P' || grd[i+1][j] == 'P' || grd[i][j-1] == 'P') a++;          
                }
                else{
                    if(i == 0 && j == 0){
                        if(grd[i+1][j] == 'P' || grd[i][j+1] == 'P') a++;
                    }
                    else if (i == 0 && j == m-1){
                        if(grd[i+1][j] == 'P' || grd[i][j-1] == 'P') a++;
                    }
                    else if (i == n-1 && !j){
                        if(grd[i-1][j] == 'P' || grd[i][j+1] == 'P') a++;
                    }
                    else{
                        if(grd[i-1][j] == 'P' || grd[i][j-1] == 'P') a++;
                    } 
                }
            }
        }
    }
    std :: cout << a;
    return 0;
}