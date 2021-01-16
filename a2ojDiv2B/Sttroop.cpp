#include <iostream>
#include <set>
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
    int max = INT_MAX; 
    //todo
    set < double > s;
    int n, X, Y, x, y;
    cin >> n >> X >> Y;
    fl(i, 0, n){
        cin >> x >> y;
        if(X-x == 0){
            s.insert(max);
        }
        else{
            //cout << ((float)(Y-y)/(float)(X-x)) << " ";
            s.insert(((double)(Y-y)/(double)(X-x)));
        }
    }
    cout << s.size();
    return 0;
}
