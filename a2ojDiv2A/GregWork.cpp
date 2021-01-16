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
    int ch = 0, bi = 0, ba = 0, t;
    for(int i = 0 ; i < n; i++){
        cin >> t;
        if(!(i%3)) ch += t;
        else if(!(i%3 - 1)) bi += t;
        else ba += t; 
    }
    if(ch > ba && ch > bi) cout << "chest";
    else if(ba > ch && ba > bi) cout << "back";
    else cout << "biceps";
    return 0;
}
