#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    vector < int > arr;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n == 1) {
            arr.push_back(1);
        } else if (k == 1) {
            arr.push_back(n * k);
        } else {
            int ans;
            ans = n * k - (k - 1);
            arr.push_back(ans);
        }

    }

    for (auto & i: arr) {
        cout << i << endl;
    }


}
