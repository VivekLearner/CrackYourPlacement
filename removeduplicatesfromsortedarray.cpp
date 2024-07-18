#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]==nums[j]) {
                continue;
            }
            else {
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
       
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
    int duplicate = removeDuplicates(a);
    cout << duplicate << endl;
    
}