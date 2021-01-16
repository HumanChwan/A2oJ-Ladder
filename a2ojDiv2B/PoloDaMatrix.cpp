#include <iostream>
#include <vector>
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
    int n, m, d, ch, sum = 0;
    cin >> n >> m >> d;
    vector<int> a(n*m);
    bool q = true;
    fl(i, 0, n*m){
        cin >> a[i];
        if(!i) ch = a[i];
        if ((a[i] - ch)%d && q) q = false;
    }
    if(!q){
        cout << -1;
        return 0;
    }
    sort(a.begin(), a.end());
    int avg = a[(n*m)/2];
    if(avg%d){
        int k = 1;
        while(true){
            if(!((avg-k - ch)%d)){
                avg -= k;
                break;
            }
            else if(!((avg+k - ch)%d)){
                avg += k;
                break;
            }
            k++;
        }
    }
    int ans = 0;
    fl(i, 0, n*m){
        ans += (abs(a[i]-avg))/d;
    }
    cout << ans;
    return 0;
}
