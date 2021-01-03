#include <iostream>
#include <vector>

int main(){
    int d, sumTime, MinSum = 0, MaxSum = 0;
    std :: cin >> d >> sumTime;
    std :: vector<int> minTime(d), maxTime(d);
    for(int i = 0; i < d; i++){
        std :: cin >> minTime[i] >> maxTime[i];
        MinSum += minTime[i];
        MaxSum += maxTime[i];
    }
    if(sumTime < MinSum || sumTime > MaxSum){
        std :: cout << "NO";
        return 0;
    }
    std :: cout << "YES\n";
    int i = 0, dif = sumTime - MinSum;
    while(i < d){
        if(dif + minTime[i] <= maxTime[i]){
            std :: cout << minTime[i] + dif <<" ";
            dif = 0;
            i++;
        }
        else{
            std :: cout << maxTime[i] << " ";
            dif -= maxTime[i] - minTime[i];
            i++;
        }
    }
    return 0;
}