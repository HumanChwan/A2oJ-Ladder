#include <iostream>
#include <vector>
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, g, d = 0;
    cin >> n;
    string s = "";
    fl(i, 0, n){
        cin >> a >> g;
        if(abs(d+a) < abs(d+a-1000)){
            d += a;
            s += 'A';
        }
        else{
            d += a-1000;
            s += 'G';
        }
    }
    if(abs(d) > 500){
        cout << -1;
    }
    else{
        cout << s;
    }
    return 0;
}
