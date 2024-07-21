#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    for(int i=0;i<strs[0].size();i++) {
        char temp = strs[0][i];
        for(int j=0;j<strs.size();j++) {
            if(strs[j].size()==i || strs[j][i]!=temp) {
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}
int main() {
    int n;
    cin >>n;
    vector<string> strs;
    for(int i=0;i<n;i++) {
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs) << endl;
}