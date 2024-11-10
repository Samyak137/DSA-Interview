/*A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int e[t], l[t];
    for(int i=0; i<t; i++){
        cin>>e[i];
    }
    for(int i=0; i<t; i++){
        cin>>l[i];
    }

    int present = 0;
    int max_present = 0;
    for(int i=0; i<t; i++){
        present += (e[i]-l[i]);
        max_present = max(max_present, present);
    }
    cout<<max_present;
}