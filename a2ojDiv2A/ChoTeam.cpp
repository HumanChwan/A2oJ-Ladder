#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int t, s = 0;
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t+k <= 5){
            s++;
        }
    }
    cout<<s/3;
    return 0;
}