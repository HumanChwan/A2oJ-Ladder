#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char a[101];
    bool p[5] = {false, false, false, false, false};
    cin>>a;
    for(int i = 0; i < strlen(a); i++){
        if((a[i] == 'o') && p[3]){
            p[4] = true;
            break;
        }
        else if((a[i] == 'l') && p[2]){
            p[3] = true;
            continue;
        }
        else if((a[i] == 'l') && p[1]){
            p[2] = true;
            continue;
        }
        else if((a[i] == 'e') && p[0]){
            p[1] = true;
            continue;
        }
        else if(a[i] == 'h'){
            p[0] = true;
            continue;
        } 
    }
    if(p[4]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}