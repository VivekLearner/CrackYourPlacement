#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    unordered_map<char,int> dict;
    for (int i = 0; i < str.length(); i++) {
        dict[str[i]]++;
    }
        for (auto it:dict) {
        
        if (it.second > 1)
            cout << it.first << ", count = " << it.second << "\n";
    }
}
int main()
{
    string str;
    cin >> str;
    printDups(str);
    return 0;
}
