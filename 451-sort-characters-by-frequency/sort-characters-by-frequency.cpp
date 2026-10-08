class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        string res;

        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        for(auto &p : v) {
            for(int i = 0; i < p.second; i++) {
                res += p.first;
            }
        }
        return res;
    }
};