class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break; //if the first number itself is +ve ,sum can never be 0,so break
            if (i > 0 && nums[i] == nums[i - 1]) continue;//skipping duplicates

            int l = i + 1, r = nums.size() - 1; //setting up the two pointers
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {l++;}//skipping duplicates
                    while (l < r && nums[r] == nums[r + 1]) {r--;}//skipping duplicates
                }
            }
        }
        return res;
    }
};
