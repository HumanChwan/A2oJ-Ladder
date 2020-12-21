#include <iostream>
#include <vector>
#define fl(a, b) for(int i = a; i < b; i++)
#define ll long long

using namespace std;

int main(){
    string n;
    vector<int> b;
    cin>>n;
    int l = n.length();
    fl(0, l-1){
        if(((int)n[i] - 48)%2 == 0){
            b.push_back(i);
            if((int)n[i] < (int)n[l-1]){
                char t = n[i];
                n[i] = n[l-1];
                n[l-1] = t;
                cout<<n;
                return 0;
            }
        }
        if(i == l-2){
            if(b.size() == 0){
                cout<<"-1";
                return 0;
            }
            else{
                char t = n[b.back()];
                n[b.back()] = n[l-1];
                n[l-1] = t;
                cout<<n;
                return 0;
            }
        }
    }
}