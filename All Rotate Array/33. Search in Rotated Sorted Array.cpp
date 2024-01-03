class Solution {
public:
    int search(vector<int>& arr, int target) {

        int start=0;
        int end=arr.size()-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;

            if(arr[mid]==target)
                return mid;
            
            // Left part sorted
            else if(arr[mid]>=arr[start])
            {
                if(arr[start]<=target && arr[mid]>=target)
                end=mid-1;
                else
                start=mid+1;
            }

            // right part sorted 

            else{
                if(arr[mid]<target&&arr[end]>=target)
                start=mid+1;
                else
                end=mid-1;
            }

        }
        
        return -1;
    }
};


// https://www.youtube.com/watch?v=w2HOAYymS3A&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=26&t=2406s
