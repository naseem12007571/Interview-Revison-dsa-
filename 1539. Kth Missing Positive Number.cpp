class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n=arr.size();
        int start=0,end=n-1;
        int mid;
        int ans=arr.size();
        while(start<=end){
            mid= start+(end-start)/2;
            if(arr[mid]-mid-1>=k) { // formula >= ye mt bhulna 
                ans=mid;
                end=mid-1;   // left bala part 
            }       
            else 
            start=mid+1;
        }
        return ans+k;
    }
};

//https://www.youtube.com/watch?v=w2HOAYymS3A&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=28&t=2406s
