#include <iostream>

using namespace std;
int n;
void toBin(int x, char y[]){
    int i = n;
    while(i >= 0){
        y[i] = {x%2 == 0 ? '0': '1'};
        x /= 2;
        i--;
    }
}

int main(){
    int m ,k, t;
    cin>>::n>>m>>k;
    char a[m][n+2], b[n+2];
    for(int i = 0; i < m; i++){
        cin>>t;
        toBin(t, a[i]);
    }
    cin>>t;
    int f = 0;
    toBin(t, b);
    t = 0;
    for(int i = 0; i < m; i++){
        t = 0;
        for(int j = 0; j < n+1; j++){
            if(b[j] != a[i][j]){
                t++;
                if (t > k){
                    break;
                }
            }
        }
        if(t <= k){f++;}
    }
    cout<<f;
    return 0;
}