#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<int> stk;
    for(int i=0;i<s.size();i++) {
        if(isdigit(s[i])) {
            stk.push(s[i]-'0');
        }
        else {
            int x = stk.top();
            stk.pop();
            int y = stk.top();
            stk.pop();
            switch(s[i]) {
                case '*':
                    stk.push(x*y);
                    break;
                case '+':
                    stk.push(x+y);
                    break;
                case '-':
                        
                    stk.push(x-y);
                    break;
                default:break;
            }
        }
        
    }
    cout << stk.top() << endl;

}