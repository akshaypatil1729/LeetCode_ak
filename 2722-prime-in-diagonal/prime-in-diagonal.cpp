class Solution {
public:
    bool primeNum(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i = 3 ; i <= n/i ; i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
         int n = nums.size();
        int res = 0;
        for(int i=0; i<n; i++){
            if(primeNum(nums[i][i])) {
                res = max(res, nums[i][i]);
            }
            if(primeNum(nums[i][n-1-i])) {
                res = max(res, nums[i][n-1-i]);
            }
        }
        return res;
    }
};