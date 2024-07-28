class Solution {
public:
    int closest(unordered_map<int,string>& dict, int value) {
        int closestkey = -1;
        int mindif = INT_MAX;
        for (auto& pair:dict) {
            if (pair.first <= value) {
                int curr = value - pair.first;
                if (curr<mindif) {
                    closestkey = pair.first;
                    mindif = curr;
                }
            }
        }

        return closestkey;
    }
    string intToRoman(int num) {
        string ans="";
        unordered_map<int,string> dict = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"},
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"}
        };
        int p=1;
        vector<int> data;
        while(num!=0) {
            int rem = num%10;
            int res = rem*p;
            data.push_back(res);
            num/=10;
            p*=10;
        }
        std::reverse(data.begin(),data.end());
        for(int i=0;i<data.size();i++) {
            while(data[i]>0) {
                int close = closest(dict,data[i]);
                ans+=dict[close];
                data[i]-=close;
            }
        }
        return ans;
    }
};
