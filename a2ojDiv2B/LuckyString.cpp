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

/*ll powFn(int num, int power){
    ll ans = num;
    fl(i, 0, power) ans *= num;
    return ans;
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //todo
    int n;
    cin >> n;
    string s = "";
    fl(i, 0, n/4) s += "abcd";
    if(n%4 == 0){
        cout << s;
    }
    else if(n%4 == 1){
        cout << s + "a";
    }
    else if(n%4 == 2){
        cout << s + "ab";
    }
    else if(n%4 == 3){
        cout << s + "abc";
    }
    return 0;
}
