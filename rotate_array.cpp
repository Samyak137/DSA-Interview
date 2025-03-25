#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int n, int k){
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k+1);
    reverse(nums.begin()+k+1,nums.end());
}

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    rotate(nums, n, k);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}