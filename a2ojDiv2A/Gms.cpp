#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int je[n][2];
    for(int i = 0; i < n; i++){
        cin>>je[i][0]>>je[i][1];
    }
    int ct = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(je[i][0] == je[j][1]){
                ct++;
            }
        }
    }
    cout<<ct;
    return 0;
}