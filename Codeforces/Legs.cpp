#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            cout << "1" << endl;
        } else if (arr[i] % 4 == 0) {
            cout << arr[i] / 4 << endl;
        } else {
            cout << (arr[i] / 4) + 1 << endl;
        }
    }

    return 0;
}