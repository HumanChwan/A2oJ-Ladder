#include <iostream>
//#include <vector>
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
    int n;
    cin >> n;
    char x, nx, inp;
    bool b = true;
    fl(i, 0, n){
        fl(j, 0, n){
            cin >> inp;
            if(!i && !j) x = inp;
            else if(!i && !(j-1)){
                nx = inp;
                if(x == nx) b = false;
            }
            else if(b){
                if(j == i){
                    if(inp != x){
                        b = false;
                    }
                }
                else if(j == n-1-i){
                    if(inp != x){
                        b = false;
                    }
                }
                else if(inp != nx) b = false; 
            }
        }
    }
    if(!b) cout << "NO";
    else cout << "YES";
    return 0;
}
