class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char,int> m;
        int count = 0;
        int cen = 0;
        for(int i = 0 ; i < n ; i++){
            m[s[i]]++; 
        }
         for(auto i : m){
            count += (i.second/2)*2;
            if(i.second % 2 == 1){
                cen = 1;
            }
         }return count+cen;
         }
};