#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int t;
    string t1;
    cin>>t;
    vector<string> a;
    fl(i, 0, t){
        cin>>t1;
        a.pb(t1);
    }
    fl(i, 0, t){
        t1 = "";
        string t2 = "";
        fl(j, 0, a[i].length()){
            if(a[i][j] == '(' || a[i][j] == ')') t1 += a[i][j];
            else t2 += a[i][j];
        }
        int an = 0, k = 0;
        fl(j, 0, t1.length()){
            if(t1[j] == '(') k++;
            else if(t1[j] == ')' && k > 0){
                k--;
                an++;
            }
        }
        k = 0;
        fl(j, 0, t2.length()){
            if(t2[j] == '[') k++;
            else if(t2[j] == ']' && k > 0){
                k--;
                an++;
            }
        }
        cout<<an<<endl;
    }
}