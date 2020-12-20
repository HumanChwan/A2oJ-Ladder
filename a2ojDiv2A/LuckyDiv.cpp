#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int div[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool p = false;
    for(int i = 0; i < 14; i++){
        if(n % div[i] == 0){
            p = true;
            break;
        }
    }
    if(p){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}