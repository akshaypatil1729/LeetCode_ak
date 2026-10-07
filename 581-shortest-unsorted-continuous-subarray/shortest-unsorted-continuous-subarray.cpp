class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> s = nums;
        sort(s.begin(),s.end());
    int st = n;
    int e = 0;
        for(int i = 0 ; i < n ; i ++){
            if(nums[i] == s[i]){
                continue;
            }else{
               st = min(st,i);
               e = max(e,i);
            }
        }
        if(st==n && e==0){
            return 0;
        }
        return e-st+1;

    }
};