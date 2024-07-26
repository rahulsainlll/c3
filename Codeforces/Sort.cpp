#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    while(t--){
        int n,q;
        int a[n],b[n];
        
        cin>>n>>q;
        for(int i = 0; i<n;i++) cin>>a[i];
        for(int i = 0; i<n;i++) cin>>b[i];
        
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<l<<r;
            
        }
        
    }

    return 0;
}