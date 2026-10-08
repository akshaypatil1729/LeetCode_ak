class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string rs;
        string rt;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#') {
                if(!rs.empty()) {
                    rs.pop_back();
                }
            }
            else {
                rs.push_back(s[i]);
            }
        }
        for(int i = 0; i < t.length(); i++) {
            if(t[i] == '#') {
                if(!rt.empty()) {
                    rt.pop_back();
                }
            }
            else {
                rt.push_back(t[i]);
            }
        }

        return rs == rt;
    }
};