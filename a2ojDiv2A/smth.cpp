#include <iostream>
#include <string.h>

using namespace std;
 
 int main(){
    char a[100];
    cin>>a;
    int n = strlen(a);
    int ar[(int)(n+1)/2];
    int c = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            ar[c] = (a[i] - 48);
            c++;
        }
    }
    int t = 0;
    for(int i = 0 ; i < c-1; i++){
        for(int j = i; j < c; j++){
            if(ar[i] > ar[j]){
                t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }
    for(int i = 0; i < c; i++){
        if(i != c-1)
            cout<<ar[i]<<"+";
        else
        {
            cout<<ar[i];
        }
    }
    return 0;
 }