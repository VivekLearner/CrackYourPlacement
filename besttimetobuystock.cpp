#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        a.push_back(val);
    }
    int profit = maxProfit(a);
    cout << profit << endl;
}
int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int max1=0,min1=prices[0];
    for(int i=1;i<n;i++) {
        min1=min(min1,prices[i]);
        int dif = prices[i]-min1;
        max1 = max(max1,prices[i]);
    }
    return max1-min1;
}
