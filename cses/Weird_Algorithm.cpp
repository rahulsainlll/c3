#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> r;
    cin >> n;
    r.push_back(n);
    
    while(n>1){
        if(n % 2 == 0){
            n = n / 2;
            r.push_back(n);
        } else {
            n = n*3+1;
            r.push_back(n);
        }
    }
    
    for(auto& i:r){
        cout << i << ' '; 
    }
    
    return 0;
}
