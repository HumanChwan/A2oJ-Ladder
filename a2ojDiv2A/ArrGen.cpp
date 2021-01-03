#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int h[n];
    int M = 1 , m = 100;
    int iM = 0, im = 0;
    for(int i = 0; i < n; i++){
        cin>>h[i];
        if(M < h[i]){
            M = h[i];
            iM = i;
        }
        if(m >= h[i]){
            m = h[i];
            im = i;
        }
    }
    cout << "hello";
    if(iM > im){
        cout<<((iM) + (n - 2 - im));
    }
    else{
        cout<<((iM) + (n - 1 - im));
    }
    return 0;
}