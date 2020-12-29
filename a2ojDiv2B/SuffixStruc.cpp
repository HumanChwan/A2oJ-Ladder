#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    int al = a.length(), bl = b.length();
    int k = 0; 
    fl(i , 0 , al){
        if(b[k] == a[i]){
            k++;
            if(k == bl){
                cout<<"automaton";
                return 0;
            }
        }
        //else k = 0;
    }
    //string t1 = a;
    sort(a.begin(), a.end());
    //string t2 = b;
    sort(b.begin(), b.end());
    k = 0;
    fl(i, 0, al){
        if(b[k] == a[i]){
            k++;
            if(k == bl && bl == al){
                cout<<"array";
                return 0;
            }
            if(k == bl){
                cout<<"both";
                return 0;
            }
        }
        //else k = 0;
    }
    cout<<"need tree";
    return 0;
}