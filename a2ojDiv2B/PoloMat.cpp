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
    //todo
    int n, m, d, true_size, first_element;
    cin >> n >> m >> d;
    true_size = n*m;
    bool p = true;
    vector< int > a(true_size);
    fl(i, 0, true_size){
        cin >> a[i];
        if(!i) first_element = a[i];
        //cout << first_element << endl;
        if((a[i]-first_element)%d) p = false;
        if(p){
            a[i] = (a[i] - first_element)/d;
        }
    }
    if(!p){
        cout << -1;
        return 0;
    }
    sort(a.begin(), a.end());
    //fl(i, 0, true_size) cout << a[i] << " ";
    //int min = a[0];
    //cout << min << endl;
    //int max = a[true_size-1];
    //cout << max << endl;
    int ans = 0;
    //set< int >::iterator it;
    /*while(min <= max){
        ct = 0;
        fl(j, 0, true_size) ct += abs(a[j] - min);
        if(!ans) ans = ct;
        if(ans > ct) ans = ct;
        min++;
    }*/
    fl(j, 0, true_size) ans += abs(a[j] - a[true_size/2]);
    cout << ans;
    return 0;
}
