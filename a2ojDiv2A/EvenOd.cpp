#include <iostream>

using namespace std;

int main(){
    long long int n, k;
    cin>>n>>k;  
    if(k > ((n+1)/2)){
        if(n % 2 == 0){
            cout<<2 * (k - (n/2));
        }
        else{
            cout<<2 * (k - ((n+1)/2));
        }
    }
    else{
        cout<<(2 * k) - 1;
    }
    return 0;
}