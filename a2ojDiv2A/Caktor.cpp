#include <iostream>


using namespace std;

int main(){
    int r, c;
    char t;
    cin>>r>>c;
    char a[r][c];
    for(int i = 0; i < r; i++){
        cin>>a[i];
    }
    int re = 0, ans = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 'S'){
                break;
            }
            else if(j == c - 1){
                ans += c;
                re++;
            }
        }
    }
    for(int j = 0; j < c; j++){
        for(int i = 0; i < r; i++){
            if(a[i][j] == 'S'){
                break;
            }
            else if(i == r - 1){
                ans += (r - re);
            }
        }
    }
    cout<<ans;
    return 0;
}