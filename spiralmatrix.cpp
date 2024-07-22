#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& a) {
    vector<int> ans;
    if(a.empty()) {
        return ans;
    }
    int top=0,left=0;
    int bottom=a.size()-1,right=a.size()-1;
    while(top<=bottom && left<=right) {
        for(int i=left;i<=right;i++) ans.push_back(a[top][i]);
        top++;
        for(int i=top;i<=bottom;i++) ans.push_back(a[i][right]);
        right--;
        if(top<=bottom) {
            for(int i=right;i>=left;i--) ans.push_back(a[bottom][i]);
            bottom--;
        }
        if(left<=right) {
            for(int i=bottom;i>=top;i--) ans.push_back(a[i][left]);
            left++;
        }
    }
    return ans;
}
int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> mat(m,vector<int>(n));
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;i++) {
            cin >> mat[i][j];
        }
    }
    vector<int> ans = spiralOrder(mat);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}