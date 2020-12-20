#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int vf[n][3], x = 0 , y = 0, z = 0;
    for(int i = 0; i < n; i++){
        cin>>vf[i][0];
        x +=  vf[i][0]; 
        cin>>vf[i][1];
        y +=  vf[i][1];
        cin>>vf[i][2];
        z +=  vf[i][2];
    }
    if(x == 0 && y == 0 && z == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}