#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int index = majorityElement(a);
    cout << index << endl;
}