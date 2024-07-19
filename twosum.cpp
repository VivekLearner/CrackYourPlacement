#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
    hash[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (hash.find(complement) != hash.end() && hash[complement] != i) {
    return {i, hash[complement]};
    }
    }
    return {};
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int> arr = twoSum(a,target);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}