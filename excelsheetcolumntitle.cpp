#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int columnNumber) {
    string num="";
    while(columnNumber!=0) {
        columnNumber--;
        int rem = columnNumber%26;
        num=char('A'+rem)+num;
        columnNumber/=26;
        
    }
    return num;
}
int main() {
    int columnnum;
    cin >> columnnum;
    string title = convertToTitle(columnnum);
    cout << title << endl;
}