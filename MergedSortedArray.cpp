#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(nums1.size()==0 || nums2.size()==0) {
        return;
    }
    int j=0;
    for(int i=m;i<nums1.size();i++) {
        nums1[i]=nums2[j];
        j++;
    }
    sort(nums1.begin(),nums1.end());
}
int main() {
    int m,n;
    cin >> m >> n;
    vector<int> num1;
    vector<int> num2;
    for(int i=0;i<m;i++) {
        cin >> num1[i];
    }
    for(int i=0;i<n;i++) {
        cin >> num2[i];
    }
    merge(num1,m,num2,n);
    for(int i=0;i<n;i++) {
        cout << num1[i] << " ";
    }
}