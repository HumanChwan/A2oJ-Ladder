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

/*ll powFn(int num, int power){
    ll ans = num;
    fl(i, 0, power) ans *= num;
    return ans;
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //todo
    int n, m;
    cin >> n >> m;
    int x, y, z;
    vector < int > dc(n, 0);
    fl(i, 0, m){
        cin >> x >> y >> z;
        //cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
        if(!i || (!dc[x-1] && !dc[y-1] && !dc[z-1])){
            dc[x-1] = 1;
            dc[y-1] = 2;
            dc[z-1] = 3;
        }
        else{
            if(dc[x-1]){
                if(dc[x-1] == 1){
                    dc[y-1] = 2;
                    dc[z-1] = 3;
                }
                else if(dc[x-1] == 2){
                    dc[y-1] = 1;
                    dc[z-1] = 3;
                }
                else{
                    dc[y-1] = 2;
                    dc[z-1] = 1;
                }
            }
            else if(dc[y-1]){
                if(dc[y-1] == 1){
                    dc[x-1] = 2;
                    dc[z-1] = 3;
                }
                else if(dc[y-1] == 2){
                    dc[x-1] = 1;
                    dc[z-1] = 3;
                }
                else{
                    dc[x-1] = 2;
                    dc[z-1] = 1;
                }
            }
            else{
                if(dc[z-1] == 1){
                    dc[x-1] = 2;
                    dc[y-1] = 3;
                }
                else if(dc[z-1] == 2){
                    dc[x-1] = 1;
                    dc[y-1] = 3;
                }
                else{
                    dc[x-1] = 2;
                    dc[y-1] = 1;
                }
            }
        }
    }
    fl(i, 0, n){
        if(!dc[i]) cout << 1 <<" ";
        else cout << dc[i] << " ";
    }
    return 0;
}
