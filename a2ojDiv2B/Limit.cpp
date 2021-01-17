#include <iostream>
//#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

/*bool SortGrtScnd(const pair<int,int> &a,
                const pair<int,int> &b)
{
    return (a.second > b.second);
}*/

/*ll powFn(int num, int power){
    ll ans = num;
    fl(i, 0, power) ans *= num;
    return ans;
}*/

int gcd(int a, int b){
    if(b == 0) return a;
    else gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //todo
    int n, m;
    cin >> n >> m;
    int pn, pm;
    cin >> pn;
    int t;
    fl(i, 0, n) cin >> t;
    cin >> pm;
    fl(i, 0, m) cin >> t;
    if(n > m){
        if((pn > 0 && pm > 0) || (pm < 0 && pn < 0)) cout << "Infinity";
        else cout << "-Infinity";
    }
    else if(n < m) cout << 0 << "/" << 1;
    else{
        int k;
        if(abs(pn) > abs(pm)) k = gcd(abs(pn), abs(pm));
        else k = gcd(abs(pm), abs(pn));
        if((pn > 0 && pm > 0) || (pm < 0 && pn < 0)) cout << abs(pn)/k << "/" << abs(pm)/k;
        else cout << "-" << abs(pn)/k << "/" << abs(pm)/k;
    }
    return 0;
}
