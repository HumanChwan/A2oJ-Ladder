#include <iostream>

using namespace std;

int main(){
    int s, n;
    cin>>s>>n;
    int pt[n][2];
    for(int i = 0; i < n; i++){
        cin>>pt[i][0]>>pt[i][1];
    
    }
    int t;
    for(int i = 0; i < (n - 1); i++){
        for(int j = i; j < n; j++){
            if(pt[i][0] > pt[j][0]){
                t = pt[i][0];
                pt[i][0] = pt[j][0];
                pt[j][0] = t;
                t = pt[i][1];
                pt[i][1] = pt[j][1];
                pt[j][1] = t;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(s <= pt[i][0]){
            cout<<"NO";
            break;
        }
        else{
            s += pt[i][1];
            if(i == (n-1)){
                cout<<"YES";
                break;
            }
        }
    }
    return 0;
}