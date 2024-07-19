#include <bits/stdc++.h>
using namespace std;

typedef vector<int> v;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, m, k, c=0;
    cin>>n>>m>>k;
    v a(n);
    v b(m);
    for(int i = 0; i<n;i++) cin>>a[i];
    for(int i = 0; i<m;i++) cin>>b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i = 0; i<n;i++){
        for (int j = 0; j < m; j++) {
            if(a[i] == b[j] || abs(a[i] - b[j]) <= k){
                c++;
                b.erase(b.begin() + j);
                break;
            }
        }
        
    }
    cout<<c;

    return 0;
}