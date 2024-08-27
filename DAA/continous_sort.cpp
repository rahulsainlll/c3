#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k=0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        temp = max(k,arr[i]);
    }

    int countArray[k+1] = {0};
    for(int i = 0 ; i < n;i++)countArray[arr[i]]++;

    for(int i = 1 ; i <=k ; i++ ){
       countArray += countArray[i-1];
    }

    for( int i = n - 1 ;  i >= 0 ; i--){
        
    }
    
    return 0;
}