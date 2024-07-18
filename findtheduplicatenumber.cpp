#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
   vector<int> a(nums.size(),0);
   for(int i=0;i<nums.size();i++) {
        a[nums[i]]++;
   }
   int ans = 0;
   for(int i=0;i<a.size();i++) {
        if(a[i]>1) {
            ans=i;
        }
   }
   return ans;
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
    int duplicate = findDuplicate(a);
    cout << duplicate << endl;
}