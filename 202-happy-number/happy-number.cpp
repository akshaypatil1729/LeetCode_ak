class Solution {
public:
    bool isHappy(int n) {

        unordered_map<int,int> mp;

        while(n != 1) {
            mp[n]++;

             if(mp[n] > 1) {
                return false;
            }
            int sum = 0;

            while(n > 0) {
                int d = n % 10;
                sum += d * d;
                n = n / 10;
            }

            n = sum;
        }

        return true;
    }
};