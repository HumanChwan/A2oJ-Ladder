#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin>>t[i];
    }
    int i = 0;
    if(t[0]%2 == t[1]%2){
        i = t[0]%2;
        for(int j = 2; j < n; j++){
            if(t[j]%2 != i){
                cout<<(j+1);
                break;
            }
        }
    }
    else if(t[0]%2 == t[2]%2){
        cout<<2;
    }
    else{
        cout<<1;
    }
    return 0;
}