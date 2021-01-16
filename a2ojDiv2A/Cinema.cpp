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
    int n, m, k, x1, y1;
    cin >> n >> m >> k;
    vector< vector< bool > > a(n, vector< bool >(m, true));
    fl(i, 0, k){
        cin >> x1 >> y1;
        if(!i){
            cout << x1 << " " << y1 << endl;
            a[x1-1][y1-1] = false;
            continue;
        }
        int ct = 1;
        while(true){
            if(a[x1-1][y1-1]){
                a[x1-1][y1-1] = false;
                cout << x1 << " " << y1 << endl;
                break;
            }
            else{
                if(x1-ct){
                    
                }
            }
        }
    }
    return 0;
}
