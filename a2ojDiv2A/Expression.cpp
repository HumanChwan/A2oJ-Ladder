#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a == 1 && c == 1){
        cout<<(a+b+c);
    }
    else if(a == 1  && c != 1){
        cout<<(a+b)*c;
    }
    else if(a != 1 && c == 1){
        cout<<(c+b)*a;
    }
    else if(a != 1 && b == 1 && c != 1){
        if(a > c){
            cout<<(c+b)*a;
        }
        else{
            cout<<(a+b)*c;
        }
    }
    else{
        cout<<(a*b*c);
    }
    return 0;
}