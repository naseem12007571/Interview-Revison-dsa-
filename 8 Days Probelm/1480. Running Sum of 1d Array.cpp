class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            ans.push_back(sum);

        }
        return ans;
    }
};

// or we can do like that 
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
        

//         int sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             nums[i]=sum;
//         }
//         return nums;
  
        
//     }
// };
