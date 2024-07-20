#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    string binstr="";
    int m = a.size()-1;
    int n = b.size()-1;
    int cry = 0;
    while(m>=0 || n>=0) {
        int sum = cry;
        if(m>=0) {
            sum+=a[m--]-'0';
        }
        if(n>=0) {
            sum+=b[n--]-'0';
        }
        if(sum>1) {
            cry=1;
        }
        else {
            cry=0;
        }
        binstr+=to_string(sum%2);
    }
    if(cry) {
        binstr+=to_string(cry);
    }
    std::reverse(binstr.begin(),binstr.end());
    return binstr;
}
int main() {
    string a="11",b="1";
    string bin = addBinary(a,b);
    cout << bin;
}