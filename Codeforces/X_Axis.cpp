#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n;
    cin>>n;
    
    vector<vector<long long>> arr(n, vector<long long>(3));
    vector<long long> temp;
    vector<long long> r;
    
    for ( int i = 0; i < n ; i++){
            for ( int j = 0; j < 3 ; j++){
            cin>> arr[i][j];
        }
    }
    
   for (long long i = 0; i < n; i++) {
        long long minSum = LLONG_MAX;

        for (long long j = 0; j < 3; j++) {
            long long sum = 0;
            for (long long k = 0; k < 3; k++) {
                sum += abs(arr[i][k] - arr[i][j]);
            }
            minSum = min(minSum, sum);
        }

        r.push_back(minSum);
    }
    
    for ( int i = 0; i < n ; i++){
            cout<< r[i]<<endl;
    }
    

    return 0;
}
