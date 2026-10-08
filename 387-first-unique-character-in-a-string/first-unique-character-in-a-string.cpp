class Solution {
public:
    int firstUniqChar(string s) {
       int n = s.length();
       unordered_map<char,int> mp;
       int i = 0;
       while(i<n){
        mp[s[i]]++;
        i++;
       }
       for(int i = 0 ; i<n ; i++) if(mp[s[i]]==1){
        return i;
       }return -1;
    }
};