class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==n-1 || nums[i]!=nums[i+1] ){
                ans.push_back(nums[i]);
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
