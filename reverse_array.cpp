/* Problem Statement: You are given an array. The task is to reverse the array and print it.  */

#include <bits/stdc++.h>
using namespace std;

int reverse(int n, vector<int> nums){
    for(int i=n-1; i>=0; i--){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int n = 0;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    reverse(n, nums);
}