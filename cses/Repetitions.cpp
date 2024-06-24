// https://www.codechef.com/ide
// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin>> str;
    
    unordered_map<string, int> r;
    
    for ( int i = 0; i < str.size() ; i++){
        string charStr(1 , str[i]);
        
        if( r.find(charStr) != r.end()){
            r[charStr]++;
        } else{
            r[charStr] = 1;
        }
    }
    
    int max_value = 1;
    
    for ( const auto & i:r){
        if( i.second > max_value ){
            max_value = i.second;
        }
    }
    
    
    cout<< max_value;

    

    return 0;
}
