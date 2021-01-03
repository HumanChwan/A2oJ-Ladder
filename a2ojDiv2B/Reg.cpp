#include <iostream>
#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, t; 
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        t = 0;
        if(i == 0){
            cout << "OK\n";
            continue;
        }  
        for(int j = 0; j < i; ++j){
            if(s[j] == s[i]) t++;
        }
        if(!t) cout << "OK\n";
        else cout << s[i] + (char)(t + 48) << endl;
    }
    return 0;
}

