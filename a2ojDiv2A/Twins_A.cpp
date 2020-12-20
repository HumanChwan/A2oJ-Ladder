#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int n, sum = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a + n);
    int end = n-1;
    int an = 1;
    int sume = a[end];
    while(end > 0){
        if((sum - a[end]) >= sume){
            an++;
            sum -= a[end];
            end--;
            sume += a[end];
        }
        else{
            break;
        }
    }
    cout<<an;
    return 0;
}