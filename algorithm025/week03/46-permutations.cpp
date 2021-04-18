class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int pos, int len, vector<int>& nums) {
        if(pos == len) {
            ans.push_back(nums);
            return;
        }

        for(int i = pos; i < len; i++) {
            swap(nums[pos], nums[i]);
            dfs(pos+1, len, nums);
            swap(nums[pos], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        dfs(0, nums.size(), nums);
        return ans;
    }
};
