class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxi =INT_MIN;
        long long prefixsum=0;
        
        for(int i=0;i<n;i++){
            prefixsum=prefixsum+arr[i];
            maxi=max(prefixsum,maxi);
            
            if(prefixsum<0)
            prefixsum=0;
        }
       
        
        return maxi;
        
    }
};

//   gfg  coder army  https://www.youtube.com/watch?v=2YksXVZitrE&t=924s
