class Solution {
public:
    bool check(vector<int>& nums) {

        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){ // ager mein 0 se start karu to i staring mein -1 ajaga
            if(nums[ i-1]>nums[i]){   // jo exist nhi karta 
                count++;
            }
        }
        if(nums[n-1]>nums[0])
            count++;
            return count<=1;
        
      }
};


// https://www.youtube.com/watch?v=Z7_nMTHROZo&t=462s
