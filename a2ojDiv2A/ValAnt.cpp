#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, v, t, k;
    cin>>n>>v;
    bool p = false;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin>>t;
        p = false;
        while(t>0){
            cin>>k;
            if (v > k && !p){
                a.push_back(i+1);
                p = true;
            }
            t--;
        }
    }
    k = a.size();
    cout<<k<<endl;
    for(int i = 0; i < k; i++){
        if (i != k-1){
            cout<<a.at(i)<<" ";
        }
        else{
            cout<<a.at(i);
        }
    }
    return 0;
}