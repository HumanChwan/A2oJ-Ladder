#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define pb push_back
#define ll long long
#define M 1000000007
#define L 1000000
#define fl(i, a, b) for(int i = a; i < b; i++)

using namespace std;

bool prime[L+1]; 

  
    

/*bool SortGrtScnd(const pair<int,int> &a,
                const pair<int,int> &b)
{
    return (a.second > b.second);
}*/
void SoEt(){
    fl(i, 0, L+1) prime[i] = true;
    for (int p=2; p*p<=L; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p]) 
        {   cout << p << " ";
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=L; i += p) 
                prime[i] = false; 
        } 
    }
}

int main(){
    //prime_checker[0] = false;
    //prime_checker[1] = false;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << "Hello!";
    SoEt();

    int n;
    cin >> n;
    while(n--){
        ll x;
        cin >> x;
        ll b = sqrt(x);
        if(prime[b] && b*b == x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
