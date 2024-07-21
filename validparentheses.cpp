#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> stk;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') {
            stk.push(s[i]);
        }
        else {
            if(stk.empty() || (s[i]==')' && stk.top()!='(') || 
            (s[i]=='}' && stk.top()!='{') ||
            (s[i]==']' && stk.top()!='[')){
                return false;
            }
        stk.pop();
        }
    }
    return stk.empty();
}
int main() {
    string s;
    cin >> s;
    cout << isValid(s) << endl;
}