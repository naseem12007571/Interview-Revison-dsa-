class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};
// k place se shift kana h k=2 yani 2 se shift karna h
// nums de rakha  n size 3 4 5 6 
// formula i+k%n bal  i=0 0+2%4= 2 ab =num[i] i=0 tha to 2 per jo aya h eleement 5 aya h use 0 per shift kardo 5 3 4 6 aisi chailta rahega  

// love babbar sir ki ye viode mein pura samjhaya h https://www.youtube.com/watch?v=Z7_nMTHROZo&t=462s
