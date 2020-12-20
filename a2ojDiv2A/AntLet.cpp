#include <iostream>
#include <string>

using namespace std;

int main(){
    //char a[1001];
    string a;
    //cin>>a;
    getline(cin,a);
    bool p[26];
    for(int i = 0; i < 26; i++){
        p[i] = false;
    }
    int i = 1;
    while(a[i] != '}'){
        p[((int)a[i])-97] = true;
        if(a[i+1] == '}'){
            break;
        }
        i += 3;
    }
    int an = 0;
    for(int j = 0; j < 26; j++){
        if(p[j]){
            an++;
        }
    }
    cout<<an;
    return 0;
}