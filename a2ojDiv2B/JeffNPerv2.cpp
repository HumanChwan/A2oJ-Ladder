#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
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
    int n, t;
    cin >> n;
    vector<pair<int, int>> a;
    fl(i, 0, n){
        cin >> t;
        a.pb(make_pair(t, i));
    }
    sort(a.begin(), a.end());
    vector<int> dif;
    vector<int> ans;
    bool p = false, q = false;
    int td = 0;
    if(n > 1){
        fl(i, 0, n-1){
            if(a[i].first == a[i+1].first && !q){
                if(!p) td = a[i+1].second - a[i].second, p = true;
                if(p){
                    if(td != a[i+1].second - a[i].second) q = true;
                    else{
                        if(i == n-2){
                            ans.pb(a[i].first);
                            dif.pb(td);
                        }
                    }
                }
            }
            else if(a[i].first != a[i+1].first){
                if(!q){
                    ans.pb(a[i].first);
                    dif.pb(td);
                }
                td = 0;
                if(i == n-2){
                    ans.pb(a[i+1].first);
                    dif.pb(0);
                }
                q = false;
                p = false;
            }
        }
    }
    else{
        ans.pb(a[0].first);
        dif.pb(0);
    }
    cout << ans.size() << endl;
    fl(i, 0, ans.size()) cout << ans[i] << " " << dif[i] <<endl;
    return 0;
}
