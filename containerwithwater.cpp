#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;
    
    while (left < right) {
        int width = right - left;
        int current_height = min(height[left], height[right]);
        int area = width * current_height;
        max_area =max(max_area, area);
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return max_area;
}

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i=0;i<n;i++) {
        cin >> height[i];
    }
    cout << maxArea(height) << endl;
    
    return 0;
}
