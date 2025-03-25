/* Problem Statement: Given an array, we have to find the smallest element in the array. */

#include <bits/stdc++.h>
using namespace std;

int smallestElement(int n, vector<int> nums){
    int small = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(small > nums[i]) small = nums[i];
    }
    return small;
}

int main(){
    int n = 0;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout<<smallestElement(n, nums);
}