#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long n, x, count = 0;
        cin >> n >> x;

        for (long long a = 1; a <= x; ++a) {
            for (long long b = 1; b <= x - a; ++b) {
                if (a * b > n) break;
                long long max_c = min(x - a - b, (n - a * b) / (a + b));
                if (max_c <= 0) continue;
                count += max_c;
            }
        }

        cout << count << endl;
    }

    return 0;
}