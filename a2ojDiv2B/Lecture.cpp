#include <iostream>


using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string t[2];
    string sp[m][2], an[n];
    for(int i = 0; i < m; i++){
        cin>>sp[i][0]>>sp[i][1];
        //sp[i] = t[0];
        //lw[i] = {(t[0].length() > t[1].length()) ? t[1] : t[0]};
    }
    for(int i = 0; i < n; i++){
        cin>>t[0];
        for(int j = 0; j < m; j++){
            if(sp[j][0] == t[0]){
                an[i] = {(sp[j][0].length() > sp[j][1].length()) ? sp[j][1] : sp[j][0]};
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i != n-1){
            cout<<an[i]<<" ";
        }
        else{
            cout<<an[i];
        }
    }
    return 0;
}