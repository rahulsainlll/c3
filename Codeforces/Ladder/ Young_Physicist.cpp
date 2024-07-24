#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    vector < array < int, 3 >> map;

    int tx = 0, ty = 0, tz = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        map.push_back({
            x,
            y,
            z
        });
    }

    for (const auto & arr: map) {
        tx += arr[0];
        ty += arr[1];
        tz += arr[2];

    }

    if (tx == 0 && ty == 0 && tz == 0) {
        cout << "YES";
    } else cout << "NO";


    return 0;
}