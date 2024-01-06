class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int ans=0;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=ans+nums[i];
                break;  //  [2,2,2,2,2]es case ke liye break lagya h hume shirf ek bar check karna h   ager loop chailta gaya to ese baar baar plus karega 
            }
        }
        return ans;
    }
};
