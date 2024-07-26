// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int arr[5][5];
    int move=0;
    int x,y;

    for (int i = 0; i < 5; i++) {
       for (int j = 0;j<5; j++){
           cin>>arr[i][j];
           if(arr[i][j]==1){
               x=i+1;
               y=j+1;
           }
       }
    }
    
    move = abs(3-x) + abs(3-y);
    cout<<move;

    return 0;
}