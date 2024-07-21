#include<bits/stdc++.h>
using namespace std;
int findPair(int n, int x, vector<int> &arr) {
    sort(arr.begin(),arr.end());
    int i=0;
    int j=1;
    while(i<n && j<n) {
        int dif = arr[j]-arr[i];
        if(dif==x && i!=j) {
            return 1;
        }
        else if(dif<x) {
            j++;
        }
        else {
           i++;
        }
    }
    return -1;
}
int main() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << findPair(n,x,a);
}