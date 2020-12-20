#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n], cti[3][n+1];
    cti[0][0] = 0;
    cti[1][0] = 0;
    cti[2][0] = 0;
    for(int i = 0; i < n; i++){
        cin>>t[i];
        if(t[i] == 1){
            cti[0][0]++;
            cti[0][cti[0][0]] = i;
        }
        else if(t[i] == 2){
            cti[1][0]++;
            cti[1][cti[1][0]] = i;
        }
        else if(t[i] == 3){
            cti[2][0]++;
            cti[2][cti[2][0]] = i;
        }
    }
    if (cti[0][0] <= cti[1][0] && cti[0][0] <= cti[2][0]){
        cout<<cti[0][0]<<endl;
        for(int i = 0; i < cti[0][0]; i++){
            cout<<(cti[0][i+1]+1)<<" "<<(cti[1][i+1]+1)<<" "<<(cti[2][i+1]+1)<<endl;
        }
    }
    else if (cti[1][0] <= cti[0][0] && cti[1][0] <= cti[2][0]){
        cout<<cti[1][0]<<endl;
        for(int i = 0; i < cti[1][0]; i++){
            cout<<(cti[0][i+1]+1)<<" "<<(cti[1][i+1]+1)<<" "<<(cti[2][i+1]+1)<<endl;
        }
    }
    else{
        cout<<cti[2][0]<<endl;
        for(int i = 0; i < cti[2][0]; i++){
            cout<<(cti[0][i+1]+1)<<" "<<(cti[1][i+1]+1)<<" "<<(cti[2][i+1]+1)<<endl;
        }
    }
    return 0;
}