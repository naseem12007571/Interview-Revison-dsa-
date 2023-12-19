class Solution {
public:
    void reverse (vector<int> &nums, int start, int end){
    while(start<end){
       swap(nums[start],nums[end]);
       start++;
       end--;

    }
    }
    void rotate(vector<int>& nums, int k) {
        
      int n=nums.size();
      k=k%n;
     reverse(nums, 0,n-k-1);
     reverse(nums, n-k, n-1);
     reverse(nums, 0,n-1);

    }
};




// Suppose we have a vector nums with the following elements:

// makefile
// Copy code
// nums: [1, 2, 3, 4, 5, 6, 7]
// And let's say we want to rotate the array by k = 9 positions.

// Get the size of the vector nums:

// makefile
// Copy code
// n = 7
// Apply the modulo operation:

// makefile
// Copy code
// k = k % n
// k = 9 % 7
// Calculate the remainder:

// makefile
// Copy code
// k = 2
// So, after applying k = k % n;, the value of k is adjusted to 2, which means we want to rotate the array by 2 positions.

// Now, if we perform the array rotation using the provided rotate function:

// cpp
// Copy code
// rotate(nums, k);
// The resulting array will be:

// makefile
// Copy code
// nums: [6, 7, 1, 2, 3, 4, 5]
// This shows that the array has been rotated by 2 positions, as indicated by the adjusted value of k using k = k % n;

 // you tube concept
https://www.youtube.com/watch?v=ENcnXXiRT6E&t=218s
