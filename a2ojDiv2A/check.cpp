#include <iostream>
#include <set>

using namespace std;
int main(){
    set<int> s{7, 8, 9, 10, 11};
    set<int>::iterator it;
    it = s.begin();
    it++;
    s.erase(it);
    cout << *it; 
    return 0;
}

