/*At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.*/


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