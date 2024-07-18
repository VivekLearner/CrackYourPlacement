#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    if(nums.size()==1) {
        return;
    }
    int i=0,j=0;
    while(j<nums.size()) {
        if(nums[j]!=0) {
            swap(nums[i],nums[j]);
            i++;
        }
        j++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        a.push_back(val);
    }
    moveZeroes(a);
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
}