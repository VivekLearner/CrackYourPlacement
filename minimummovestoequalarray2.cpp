#include<bits/stdc++.h>
using namespace std;
int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int mid = (0+nums.size())/2;
    int c=0;
    int i=0;
    int n = nums.size();
    while(i<n) {
        if(nums[i]<nums[mid]) {
            c+=(nums[mid]-nums[i]);
        }
        else {
            c+=(nums[i]-nums[mid]);
        }
        nums[i]=nums[mid];
        i++;
    }
    for(int j=0;i<nums.size();j++) {
        cout << nums[j] << " ";
    }
    return c;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    cout << minMoves2(nums) << endl;
}