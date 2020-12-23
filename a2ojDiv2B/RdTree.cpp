#include <iostream>
#define ll long long
#define M 1000000007
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n, t, h, an = 0;
    cin>>n;
    fl(i, 0, n){
        cin>>h;
        if(i == 0){
            t = h;
            an += t + 1;
            continue;
        }
        an += abs(t-h) + 1 + 1;
        t = h;
    }
    cout<<an;
    return 0;
}