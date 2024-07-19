#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,c=1;
    cin>>t;
    vector<int> a(t);
    
    for(int i = 0; i<t;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i = 1; i<t;i++){
        if(a[i]!=a[i-1]){
            c++;
        }
    }
    cout<<c;

    return 0;
}