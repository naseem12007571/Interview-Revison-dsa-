class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int insertindex=1; // 1 se esliye chiala raha kiyo ki 0 index per 
                                //already unique value hogi 
        for(int i=1;i<n;i++){  // ye bhi same 1 se chaileha;
        if(nums[i-1]!=nums[i]){  // ye check kar raha h ager mera i se piche 
        nums[insertindex]=nums[i];// bala index equal nhi h to use insert index mein stor karo
        insertindex++;     // ab se age badhana hoga kiyo ki uper i se insert kari value
          } 
        }
             return insertindex; //ab last mein wahi last value agye hogi hogi array ki 
    }
};
// https://www.youtube.com/watch?v=BWihLgxbCjQ 
