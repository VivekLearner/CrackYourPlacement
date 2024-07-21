#include <iostream>
#include <vector>
using namespace std;

int maxScore(vector<int> &cardPoints, int k) {
        int n =cardPoints.size();
        int max1=0;
        for(int i=0;i<k;i++) {
            max1+=cardPoints[i];
        }
        int window=0;
        int x=k-1;
        for(int i=k-1;i>=0;i--) {
            window=max(max1,window);
            max1-=cardPoints[i];
            max1+=cardPoints[n-k+i];
        }
        window=max(max1,window);
        return window;
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
    cout << maxScore(nums, k) << endl;
    return 0;
}