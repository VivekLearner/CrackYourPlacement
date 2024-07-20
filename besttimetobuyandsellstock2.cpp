#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int start = prices[0];
    int max = 0;
    for(int i=1;i<prices.size();i++) {
        if(start<prices[i]) {
            max+=prices[i]-start;
        }
        start = prices[i];
    }
    return max;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int profit = maxProfit(a);
    cout << profit;
}