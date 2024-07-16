#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    ll count = 0;

    int a, b;
    cin >> a;

    for (int i = 1; i < t; i++) {
        cin >> b;
        if (a > b) {
            count += a - b;
        } else a = b;
    }
    cout << count;
    return 0;
}