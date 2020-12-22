#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int k , sl = s.length(), fa = 0;
    cin>>k;
    int m = 0, t;
    for(int i = 0; i < 26; i++){
        cin>>t;
        if(m < t) m = t;
        for(int j = 0; j < sl; j++){
            if((int)s[j] - 97 == i) fa += (t * (j+1));
        }
    }
    fa += m * ((sl * k) + (k * (k+1))/2);
    cout<<fa;
    return 0;
}