class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0, maxPos = 0, maxDest = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(maxPos >= i){
                maxPos = max(maxPos, nums[i] + i);
                if(i == maxDest) {
                    step++;
                    maxDest = maxPos;
                }
            }
        }
        return step;
    }
};