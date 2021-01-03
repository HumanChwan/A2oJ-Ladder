#include <iostream>
#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, a, g;
    cin >> n;
    string s = "";
    int Sa = 0, Sg = 0;
    fl(i, 0, n){
        cin >> a >> g;
        if(Sg == Sa){
            (a < g) ? Sa += a : Sg += g;
            s += (a < g) ? 'A' : 'G'; 
            continue;
        }
        if(Sa - Sg > 500){
            Sg += g;
            s += 'G';
            continue;
        }
        if(Sg - Sa > 500){
            Sa += a;
            s += 'A';
            continue;
        }
        if(Sa > Sg && Sg + g - Sa < 500){
            Sg += g;
            s += 'G';
            continue;
        }
        else{
            Sa += a;
            s += 'A';
            continue;
        }
        if(Sg > Sa && Sa + a - Sg < 500){
            Sa += a;
            s += 'A';
            continue;
        }
        else{
            Sg += g;
            s += 'G';
            continue;
        }
    }
    if(abs(Sa - Sg) > 500){
        cout << -1;
    }
    else cout << s;
    return 0;
}
