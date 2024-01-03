class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini= min(nums[i],mini);

        }
        return mini;
    }
};

////// coder army code 
class Solution {
public:
    int findMin(vector<int>& nums) {
      int s=0,e=nums.size()-1;
      int ans=nums[0];
      
      while(s<=e){
        int mid= s+(e-s)/2;
          if(nums[mid]>=nums[0])
              s=mid+1;
          
          else{
              ans=nums[mid];
              e=mid-1;

          }

      }
    return ans;
        
    }
};


https://www.youtube.com/watch?v=w2HOAYymS3A&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=24&t=2406s
