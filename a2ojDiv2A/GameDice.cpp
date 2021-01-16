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
    int a, b, d = 0, aw = 0;
    cin >> a >> b;
    fl(i, 0, 6){
        if(abs(a-(i+1)) < abs(b-(i+1))) aw++;
        else if (abs(a-(i+1)) == abs(b-(i+1))) d++;
    }
    cout << aw << " " << d << " " << (6-(aw+d));
    return 0;
}
