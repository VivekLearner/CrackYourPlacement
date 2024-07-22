#include<bits/stdc++.h>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k) {
   unordered_map<int,int> dict = {{0,1}};
   int prefix_sum=0,ans=0;
   dict[prefix_sum]=1;
   for(auto i:nums) {
        prefix_sum+=i;
        int rem = prefix_sum%k;
        if(rem<0) {
            rem+=k;
        }
        if(dict.find(rem)!=dict.end()) {
            ans+=dict[rem];
        }
        dict[rem]++;
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
    cout << subarraysDivByK(nums,k) << endl;
    return 0;
}