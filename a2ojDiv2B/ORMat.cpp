#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> e(n, vector<int> (m, 0));
    fl(i, 0, n) fl(j, 0, m) cin>>e[i][j];
    vector<int> r(n, 0);
    vector<int> c(m, 0); 
    bool p = false;
    fl(i, 0, n){ 
        vector<int> t;
        p = false;
        bool p = false;
        fl(j, 0, m){
            //s += e[i][j];
            if(e[i][j] == 0){
                if(t.size() != 0 && r[i] == 0){
                    p = true;
                    fl(k, 0, t.size()) c[t[k]] = 1;
                }
                if(r[i] == 1){
                    cout<<"NO";
                    return 0;
                }
                if(c[j] == 1){
                    cout<<"NO";
                    return 0;
                }
                r[i] = -1;
                c[j] = -1;
            }
            else if(e[i][j] == 1 && (r[i] == -1 && c[j] == -1)){
                cout<<"NO";
                return 0;
            }
            else if(e[i][j] == 1 && (r[i] == -1 && c[j] != -1)) c[j] = 1;
            else if(e[i][j] == 1 && (r[i] != -1 && c[j] == -1)) r[i] = 1;
            else t.pb(j);
            
        }
        if(!p && t.size() > 0) r[i] = 1;
        /*if(t.size() != 0 && !p){
            fl(k, 0, t.size()) c[t[k]] = 1;
        }*/
    }
    /*if(s < n+m-1){
        cout<<"NO";
        return 0;
    }*/
    cout<<"YES"<<endl;
    fl(i, 0, n){
        fl(j, 0, m){
            if(r[i] == 1 && c[j] == 1) cout<<1;
            else cout<<0;
            if(j != m-1) cout<<" ";
            else cout<<endl;
        }
    }
    return 0;
}