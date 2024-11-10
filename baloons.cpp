#include <bits/stdc++.h>
using namespace std;

string oddBaloon(vector<char> v){
    unordered_map<char, int> map;

    for(auto i: v){
        map[i]++;
    }

    for(auto i: v){
        if(map[i] % 2 != 0){
            return string(1, i);
        } 
    }
    return "All are even";
}

int main(){
    int n;
    cin>>n;
    vector<char> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    cout<<oddBaloon(v);
}