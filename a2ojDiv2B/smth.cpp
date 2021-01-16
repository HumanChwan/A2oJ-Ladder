#include <iostream>
//#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

/*bool sortbysec(const pair<int,int> &a,
                const pair<int,int> &b)
{
    return (a.second > b.second);
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int sum = 0, mh, rn;
        fl(i, 0, n){
            cin >> rn;
            if(!i) mh = rn;
            else{
                sum += rn;
            } 
        }
        if(sum + mh >= m){
            cout << m << endl;

        }
        else{
            cout << sum + mh << endl;
        }
    }
    return 0;
}
