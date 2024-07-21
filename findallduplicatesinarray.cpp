#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    if(nums.size()==1) {return {};}
    sort(nums.begin(),nums.end());
    map<int,int> dict;
    for(int i=0;i<nums.size();i++) {
        dict[nums[i]]++;
    }
    vector<int> dup;
    for(auto &p:dict) {
        if(p.second>1) {
            dup.push_back(p.first);
        }
    }
    return dup;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    vector<int> res = findDuplicates(a);
    for(int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
}