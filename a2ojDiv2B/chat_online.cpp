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
    //todo
    int p, q, l, r, t1, t2;
    cin >> p >> q >> l >> r;
    vector < pair < int, int > > X(p);
    vector < pair < int, int > > Y(q);
    fl(i, 0, p){
        cin >> t1 >> t2;
        X[i].first = t1;
        X[i].second = t2;
    }
    fl(i, 0, q){
        cin >> t1 >> t2;
        Y[i].first = t1 + l;
        Y[i].second = t2 + l;
    }
    int d = l-r+1;
    return 0;
}
