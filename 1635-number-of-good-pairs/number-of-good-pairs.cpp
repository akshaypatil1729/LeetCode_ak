class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int cnt = 0;
        for(int i=0; i<n; i++){
            cnt += mpp[nums[i]];
            mpp[nums[i]]++;
        }
        return cnt;
    }
};