#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    if (t == 1) cout << "1";
    else if ((t == 3) | (t == 2)) cout << "NO SOLUTION";
    else if (t == 4) cout << "3 1 4 2";
    else {
        for (int i = 2; i <= t; i += 2) cout << i << " ";
        for (int i = 1; i <= t; i += 2) cout << i << " ";
    }
    return 0;
}