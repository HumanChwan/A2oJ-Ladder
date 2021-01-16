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
    int n, k;
    cin >> n >> k;
    vector < int > a(n);
    fl(i, 0, n) cin >> a[i];
    int pitai = (!(n%k) ? n/k : n/k + 1);
    int m = 0;
    //cout << pitai << endl;
    int j = 0;
    fl(i, 0, pitai){
        m += a[j];
        j += k;
    }
    int id = 0;
    fl(i, 1, k){
        j = i;
        int t = 0;
        fl(l, 0, pitai){
            t += a[j%n];
            //cout << j%n;
            j += k;
        }
        //cout << "->" << t << "<-";
        if(m > t) m = t, id = i;
    } 
    cout << id + 1;
    return 0;
}
