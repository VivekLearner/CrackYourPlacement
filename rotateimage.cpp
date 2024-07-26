#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i]=temp;
        }

    }
    for(auto &i:matrix) {
        reverse(i.begin(),i.end());
    }
    
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    rotate(matrix);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout  << matrix[i][j];
        }
    }

}