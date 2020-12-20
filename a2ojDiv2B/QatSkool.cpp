#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    char a[n+1];
    cin>>a;
    int k;
    for(int i = 0; i < t; i++){
        int j = 0;
        while(j < n){
            if(a[j] == 'B' && a[j+1] == 'G'){
                a[j] = 'G';
                a[j+1] = 'B';
                j++;
            }
            j++;
        }
    }
    cout<<a;
    return 0;
}