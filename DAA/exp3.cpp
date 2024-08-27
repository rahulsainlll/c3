#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++) cin>>arr[i];

    unordered_map<int,int> hashmap;

    for ( int i = 0; i < arr[i].size(); i++){
        if (hashmap.find(arr[i]) == hashmap.end()) hashmap(arr[i]) = 1;
        else hashmap(arr[i])++;
    }

    for ( auto & i : hashmap){
        cout<<i.first<<" "<< i.second<<endl;
    }

    return 0;
}
