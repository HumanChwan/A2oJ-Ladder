#include <iostream>
#define ll long long

int main(){
    int n;
    ll t, sum = 0;
    std :: cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++) std :: cin >> a[i], sum += a[i];
    int start = 0, end = n-1;
    while(start <= end){
        if(sum <= t){
            //std :: cout << start << "-" << end << "\n";
            std :: cout << end-start+1;
            return 0;
        }
        if(sum > t && start == end){
            std :: cout << 0;
            return 0;
        }
        if(a[start] < a[end]){
            sum -= a[end];
            end--;
        }
        else if(a[start] > a[end] || (start+1 == end && a[start] == a[end])){
            sum -= a[start];
            start++;
        }
        else{
            int temps = start;
            int tempe = end;
            while(true){
                tempe--;
                temps++;
                if(a[temps] < a[tempe]){
                    for(; end != tempe - 1; end--) sum -= a[end];
                    break;
                }
                else if(a[temps] > a[tempe]){
                    for(; start != temps + 1; start++) sum -= a[end];
                    break;
                }
            }
        }
    }
}