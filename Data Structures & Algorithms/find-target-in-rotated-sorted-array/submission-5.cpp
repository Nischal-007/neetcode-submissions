class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        // Find the pivot (smallest element)
        while (l < r) {
            int m = (l + r) / 2;
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
         
        int pivot = l; // Index of smallest element
        l = 0;
        r = nums.size() - 1;
         //Decide which half to search
        if (target >= nums[pivot] && target <= nums[r]) {
            l = pivot;// Search in right half
        } else {
            r = pivot - 1;// Search in right half
        }
        //Standard binary search
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return -1;//target not found
    }
};