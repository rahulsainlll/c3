// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c = s[0];
    int l, m;
    l = 1;
    m = 1;
    for (int i = 1; i < s.size(); i++) {
        if (c == s[i]) l++;
        else {
            m = max(m, l);
            l = 1;
            c = s[i];
        }
    }
    cout << max(m, l) << endl;
}