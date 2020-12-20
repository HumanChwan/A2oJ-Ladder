#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin>>a[i];
    }
    long long int ans = 0;
    for(int i = 0; i < m; i++){
        if(ans == 0){
            ans += a[i]-1;
        }
        else if(a[i] >= a[i-1]){
            ans += a[i]-a[i-1];
        }
        else{
            ans += (n - a[i-1]) + a[i];
        }
    }
    cout<<ans;
    return 0;
}