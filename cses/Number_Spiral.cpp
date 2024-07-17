// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

using pii = pair < int, int > ;
using ll = long long;

int t;
int y, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        int ans = 0;
        cin >> y >> x;
        
        if(y==x){
            ans = x*x - (x-1);
        }else{
            int m = max(y, x);
        
        if(m%2 == 0){
            if(m == y){
                ans = m * m - (m - x);
            } else{
                ans = m*m - ( y - 1);
            }
        } else {
            if(m == x){
                ans = m * m - (m - y);
            } else{
                ans = m * m - (x-1);
            }
        }
        }
        
        cout<<ans<<endl;

    }
}
