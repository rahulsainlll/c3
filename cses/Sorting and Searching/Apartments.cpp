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
    
    int i= 0,j=0;
    
    while(i<n&&j<m){
        if(a[i]+k <b[j]) i++;
        else if(a[i]-k >b[j]) j++;
        else{
            c++;i++;j++;
        }
        
    }
    
    cout<<c;

    return 0;
}
