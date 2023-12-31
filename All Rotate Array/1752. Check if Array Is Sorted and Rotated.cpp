class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;     // ye check karega kitne pair exist karte h ager pair h to true
        for(int i=1;i<n;i++){  // 1 se esliye kara kiyo ki -1 exist nhi karta if bala
            if(nums[i-1]>nums[i]){
                count++;
            }
            
        }
        // last element comparesion 
        if(nums[n-1]>nums[0])
            count++;
            return count<=1;   // yahan ye return karna tha count==1 but ek case or tha ager  all 11111 ho to es case mein 1 ko equal to tk chailana hoga
            //  https://www.youtube.com/watch?v=Z7_nMTHROZo&t=1687s
        
        
    }
};
