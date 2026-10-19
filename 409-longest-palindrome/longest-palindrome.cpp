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
        //  for(auto i : m){
        //     count += (i.second/2)*2;
        //     if(i.second % 2 == 1){
        //         cen = 1;
        for(int i = 0; i < n ; i++){
           
            count += (m[s[i]]/2)*2;
      
            if(m[s[i]] % 2 == 1){
                cen = 1;
            }

                m[s[i]] = 0;
            }
            return count+cen;
        }
        
};