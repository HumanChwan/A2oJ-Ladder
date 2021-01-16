#include <iostream>
//#include <vector>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000003
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
    string s;
    cin >> s;
    int len = s.length();
    unsigned ll ans = 0;
    // ">"  →  1000
    // "<"  →  1001
    // "+"  →  1010
    // "-"  →  1011
    // "."  →  1100
    // ","  →  1101
    // "["  →  1110
    // "]"  →  1111
    int t = 1;
    fl(i, 0, len){
        int exp = len-1-i;
        fl(i, 0, exp){
            t *= 16;
            t = t%M;
        }
        if(s[i] == '>') t *= 8; 
        else if(s[i] == '<' ) t *= 9;
        else if(s[i] == '+' ) t *= 10;
        else if(s[i] == '-' ) t *= 11;
        else if(s[i] == '.' ) t *= 12;
        else if(s[i] == ',' ) t *= 13;
        else if(s[i] == '[' ) t *= 14;
        else if(s[i] == ']' ) t *= 15;
        ans += (t%M);
        t = 1;
    }
    cout << ans % M;
    return 0;
}
