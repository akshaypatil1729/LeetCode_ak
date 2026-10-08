class Solution {
public:
    string removeOuterParentheses(string s) {
    int n = s.length();
    string res;
    int c = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '('){
            if(c > 0){
                res.push_back(s[i]);
            }
            c++;
        } else {
            c--;
        
            if(c > 0){
                res.push_back(s[i]);
            }
        }
    }return res;
    }
};