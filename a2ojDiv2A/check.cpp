#include <cstdio>

int main(){
    const int n = 5;
    int a[n] = {4, 2, 4, 3, 1};
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
}

