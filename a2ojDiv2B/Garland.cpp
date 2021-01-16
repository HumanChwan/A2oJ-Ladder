#include <iostream>
#include <algorithm>
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
    string n, m;
    cin >> n >> m;
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());
    int ans = 0, max = 0, available = 0;
    char present = m[0];
    fl(i, 0, m.length()){
        if(m[i] != present || !i){
            present = m[i];
            max = 0;
            available = 0;
            max = upper_bound(m.begin(), m.end(), present) - lower_bound(m.begin(), m.end(), present);
            available = upper_bound(n.begin(), n.end(), present) - lower_bound(n.begin(), n.end(), present);
            if(!available){
                cout << -1;
                return 0;
            }
            if(max > available) ans += available;
            else ans += max;
        }
    }
    cout << ans;
    return 0;
}
