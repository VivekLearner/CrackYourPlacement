#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    while(ss>> word) {
        words.push_back(word);
    }
    std::reverse(words.begin(),words.end());
    string ans="";
    for(string& w:words) {
        ans+=w+" ";
    }
    ans.erase(ans.size()-1);
    return ans;
}
int main() {
    string s;
    cin >> s;
    cout << reverseWords(s) << endl;
}