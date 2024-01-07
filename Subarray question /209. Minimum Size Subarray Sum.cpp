class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, ans = INT_MAX, n = nums.size();
        while(i < n){
            sum += nums[i];
            while(j <= i && sum >= target){
                ans = min(ans,i-j+1);
                sum -= nums[j];
                j++;
            }
            i++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
