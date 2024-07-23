#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    
    cin >>n;
    set<long long> r;
    
    while(n--){
        long long q;
        cin >> q;
        r.insert(q);
    }
    
    
    long long prev = *r.begin();
    
    if (r.size() == 1) {
        if (prev == 1) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
        return 0;
    }
    
    bool found = false;
    for (auto i = ++r.begin(); i != r.end(); i++) {
        
        if( *i != prev + 1){
            cout << prev + 1;
            found = true;
            break;
        }
        prev = *i;
    }
    
    if(!found){
        cout<<r.size()+1;
    }

    
    return 0;
}
