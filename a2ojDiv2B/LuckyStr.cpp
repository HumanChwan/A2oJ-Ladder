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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int f = 0, sv = 0;
    fl(i, 0, s.length()){
        if(s[i] == '4') f++;
        else if(s[i] == '7') sv++;
    }
    if(!f && !sv) cout << -1;
    else if(f < sv) cout << 7;
    else cout << 4;
    return 0;
}
