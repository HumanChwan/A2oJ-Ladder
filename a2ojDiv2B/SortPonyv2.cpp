#include <iostream>

using namespace std;

int main(){
    int n, t, br = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(i != 0){
            if(a[i] < a[i-1]){
                br++;
                t = i;
                if(br > 1){
                    cout<<-1;
                    return 0;
                }
            }
        } 
    }
    if(br == 0){
        cout<<0;
        return 0;
    }
    if(a[0] < a[n-1]){
        cout<<-1;
        return 0;
    }
    cout<<(n-t);
    return 0;
}