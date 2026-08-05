class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (target == nums[m]) {
                return m;   // Found target
            }

            // Case 1: Left half is sorted
            if (nums[l] <= nums[m]) {
                if (target > nums[m] || target < nums[l]) {
                    l = m + 1;   // Target not in left half
                } else {
                    r = m - 1;   // Target in left half
                }
            }
            // Case 2: Right half is sorted
            else {
                if (target < nums[m] || target > nums[r]) {
                    r = m - 1;   // Target not in right half
                } else {
                    l = m + 1;   // Target in right half
                }
            }
        }
        return -1;   // Not found
    }
};
