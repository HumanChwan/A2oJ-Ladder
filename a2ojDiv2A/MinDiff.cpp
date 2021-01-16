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
    int n, mO, t;
    cin >> n;
    vector < int > a(n);
    //if (n == 3){

    //}
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i){
            if(!(i-1)) mO = a[i] - t;
            else{
                if(mO < a[i] - t) mO = a[i] - t;
            }
        }
        t = a[i];
    }
    bool p = false;
    int mf = a[2] - a[0];
    for(int i = 0; i < n-2; ++i){
        if(a[i+2] - a[i] < mf) mf = a[i+2] - a[i], p = true;
    }
    if(mO > mf && n > 3){
        cout << mO;
    }
    else cout << mf;
    return 0;
}
