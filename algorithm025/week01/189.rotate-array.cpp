class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int pos = (k % nums.size());
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + pos);
        reverse(nums.begin() + pos, nums.end());
    }
};
