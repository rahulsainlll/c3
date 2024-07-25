#include <bits/stdc++.h>
using namespace std;

typedef vector<int> v;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, x, c=0;
    cin>>n>>x;
    v a(n);
    for(int i = 0; i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    
    int j=1;
    int sum = a[0];
    
    while(j<n){
        if(){
            
        }
        else if( (sum + a[j]) <= x ) {sum+=a[j]; sum = a[j]; j++; c++;}
        else {
            sum = a[j];
            c++;
            j++;
        }
        
    }
    
    cout<<c;

    return 0;
}