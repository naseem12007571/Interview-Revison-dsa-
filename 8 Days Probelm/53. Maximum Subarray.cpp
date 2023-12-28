class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(maxi, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};

// https://www.youtube.com/watch?v=w4W6yya1PIc&t=20s
