vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    vector<int> ans(n1,-1);
    for(int i=0;i<n1;i++) {
        int j=0;
        while(nums2[j]!=nums1[i]) {
            j++;
        }
        for(int k=j+1;k<nums2.size();k++) {
            if(nums2[k]>nums1[i]) {
                ans[i]=nums2[k];
                break;
            }
        }
    }
    return ans;
}