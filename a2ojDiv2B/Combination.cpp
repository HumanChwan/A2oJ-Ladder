#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

bool SorterSecGrt(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return ((a.second != b.second) ? (a.second > b.second) : (a.first > b.first)); 
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ta, tb;
    cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; ++i) {
        cin >> ta >> tb;
        a.pb(make_pair(ta, tb));
    }
    sort(a.begin(), a.end(), SorterSecGrt);
    if(a[0].second == 0){
        cout << a[0].first;
        return 0;
    }
    else{
        int b = 1;
        int i = 0;
        int pt = 0; 
        while(b && i < n){
            b--;
            b += a[i].second;
            pt += a[i].first;
            i++;
        }
        cout << pt;
        return 0;
    }
    //fl(i, 0, n) cout << a[i].first << "<->" << a[i].second << " ";
    return 0;
}
