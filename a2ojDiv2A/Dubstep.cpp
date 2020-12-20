#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char a[201], temp[4] = "WUB";
    cin>>a;
    int i = 0;
    bool p = false, o = false;
    while(i < strlen(a)){
        temp[0] = a[i];
        temp[1] = a[i+1];
        temp[2] = a[i+2];
        temp[3] = '\0';
        if(strcmp(temp, "WUB") == 0){
            i += 3;
            p = false;
            continue;
        }
        else if(!p){
            if (!o){
                cout<<a[i];
                o = true;
                p = true;
            }
            else{
                cout<<" "<<a[i];
                p = true;
            }
        }
        else{
            cout<<a[i];
            p = true;
        }
        i++;
    }
    return 0;
}