#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n > 0){
        cout<<n;
    }
    else{
        if((n%10) < ((n/10)%10)){
            cout<<(n/10);
        }
        else{
            int t = n%10;
            n /= 10;
            n += (abs(n))%10;
            n += t;
            cout<<n;
        }
    }
    return 0;
}