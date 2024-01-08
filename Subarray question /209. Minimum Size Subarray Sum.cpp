class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        

        int i=0;
        int j=0;
        int sum=0;
        int ans=INT_MAX;
        while(j<nums.size()){
            sum=sum+nums[j];
            while(sum>=target){
                ans=min(ans, j-i+1); // windo nikal kar ans mein dal rahe h
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        if(ans==INT_MAX){ // ager ans mila hi nhi int_max se chnage hi nhi return0
            return 0;
        }
        return ans;
    }
};

//https://www.youtube.com/watch?v=J3GUIx2lIAQ
