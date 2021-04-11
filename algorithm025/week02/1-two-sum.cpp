class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> HashTable;
        for(int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> :: iterator it;
            it = HashTable.find(target - nums[i]);
            if(it != HashTable.end()){
                return {it -> second, i};
            }
            HashTable[nums[i]] = i;
        }
        return {};
    }
};
