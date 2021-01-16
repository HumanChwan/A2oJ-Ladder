#include <iostream>
#include <vector>
#include <set>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    set<int>::iterator itr;
    vector<int> dm;
    int d = 0;
    bool p = false;
    for(itr = s.begin(); itr != s.end(); itr++){
        p = false;
        bool q = true;
        d = 0;
        int tpi;
        fl(i, 0, n){
            if(*itr == a[i]){
                if(!p){
                    tpi = i;
                    p = true;
                    q = false;
                }
                else if(!q){
                    d = i - tpi;
                    tpi = i;
                    q = true;
                }
                else{
                    if(d != i - tpi){
                        s.erase(itr);
                        cout << *itr << "<->" << *(++itr);
                        --itr;
                        if(++itr != s.end()) --itr;
                        break;
                    }
                    tpi = i;
                }
            }
            if(i == n-1) dm.pb(d);
        }
    }
    int i = 0;
    cout << s.size() << endl;
    for(itr = s.begin(); itr != s.end(); itr++){
        cout << *itr << " " << dm[i] << endl;
        i++;
    }
    return 0;
}