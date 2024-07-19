#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long int i=0;
    long int j=m-1;
    long mini = INT_MAX;
    while(j<a.size()) {
        long dif = a[j]-a[i];
        mini = std::min(dif,mini);
        i++;
        j++;
    }
    return mini;
        
    
}
int main() {
    long long n,m;
    cin >> n >> m;
    vector<long long> a;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long ans = findMinDiff(a,n,m);
    cout << ans << endl;
} 