#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n], an[n];
    for(int i = 0; i < n; i++){
        cin>>p[i];
        an[p[i] - 1] = i + 1;
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