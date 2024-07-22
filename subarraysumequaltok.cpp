#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> dict;
    int prefix_sum=0,ans=0;
    dict[prefix_sum] = 1;
    for(auto i:nums){
        prefix_sum += i;
        int dif = prefix_sum - k;
        if(dict.find(dif) != dict.end()){
            ans += dict[dif];
        }
        dict[prefix_sum]++;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << subarraySum(nums, k) << endl;
    return 0;
}