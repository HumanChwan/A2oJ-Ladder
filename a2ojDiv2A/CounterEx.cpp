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
    ll l, r;
    cin >> l >> r;
    if(r-l < 2){
        cout << -1;
    }
    else if(r-l > 2 || !(l%10 & 1)){ 
        if(l%10 & 1) l++;
        cout << l << " " << l+1 << " " << l+2;
    }
    else{
        cout << -1;
    }

    return 0;
}
