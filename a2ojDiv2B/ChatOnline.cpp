#include <iostream>
#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

/*bool sortbysec(const pair<int,int> &a,
                const pair<int,int> &b)
{
    return (a.second > b.second);
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, q, l, r, t1, t2;
    cin >> p >> q >> l >> r; 
    vector <pair<int, int>> ab, cd;
    fl(i, 0, p){
        cin >> t1 >> t2;
        ab.pb(make_pair(t1, t2));
    }
    fl(i, 0, q){
        cin >> t1 >> t2;
        cd.pb(make_pair(t1, t2));
    }
    int i = 0;
    fl(j, l, r+1){
        while(i < p){
            if(a[i] < c[i])
        }
    }
    return 0;
}
