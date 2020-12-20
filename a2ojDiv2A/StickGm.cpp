#include <iostream>

using namespace std;

int main(){
    int n, m, i = 0;
    cin>>n;
    cin>>m;
    do{ 
        i++;
        n--;
        m--;
        if(n == 0 || m == 0){
            if(i % 2 == 0){
                cout<<"Malvika";
            }
            else{
                cout<<"Akshat";
            }
        }
    }while(n > 0 && m > 0);
    return 0;
}