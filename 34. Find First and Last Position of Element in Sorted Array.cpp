class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ansLeft = -1;
        int ansRight = -1;

        // Binary search for the leftmost occurrence
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ansLeft = mid;
                e = mid - 1;
            } else if (target > nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

    //   right most occourance ke liye variable;
        int  start = 0;
        int end = nums.size() - 1;

        // Binary search for the rightmost occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ansRight = mid;
                start = mid + 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return {ansLeft, ansRight};
    }
};
