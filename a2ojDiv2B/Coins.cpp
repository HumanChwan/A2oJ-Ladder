#include <iostream>
#include <cmath>
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
    int n, srt;
    cin >> n;
    cout << n << " ";
    if(!(n-1)) return 0;
    while(true){
        srt = sqrt(n);
        bool check =  false;
        if(srt == 1){
            cout << 1;
            break;
        }
        fl(i, 2, srt+1){
            //cout << i << "<- ";
            if(!(n%i)){
                n /= i;
                cout << n << " ";
                check = true;
                break;
            }
        }
        if(!check){
            cout << 1;
            break;
        }
    }
    return 0;
}
