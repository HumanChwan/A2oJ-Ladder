#include <iostream>
//#include <vector>
#include <algorithm>
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

/*bool BinSrchApp(vector< float >::iterator, end_ptr, float m){
    int start = 0, end = a.end();
    if()
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //todo
    //vector < float > a;
    int n, X, Y, x, y;
    cin >> n >> X >> Y;
    set < float > s;
    fl(i, 0, n){
        cin >> x >> y;
        float m = (float)(Y-y)/(X-x);
        //cout << m << " ";
        cout << m << " ";
        if(m == 0) m = 0;
        s.insert(m);
        /*int start = 0, end = a.size();
        bool p = false;
        while(start < end){
            int mid = (start + end)/2;
            if(abs(a[mid] - m) <= 1e-4){
                p = true;
                break;
            }
            else if(a[mid] - m > 1e-4){
                end = mid;
                continue;
            }
            else{
                start = mid + 1;
            }
        }*/
        
        /*if(!p){
            //cout << m << "<- ";
            a.pb(m);
        }*/
        //set < float >::iterator it;
        /*cout << endl << ":";
        for(it = s.begin(); it != s.end(); ++it){
            cout << *it << " ";
        }
        cout << ":" << endl;*/
    }
    cout << s.size();
    return 0;
}
