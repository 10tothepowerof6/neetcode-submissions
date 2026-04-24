class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;

        for(int i = 0; i < nums.size(); ++i)
        {
            pos[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); ++i)
        {
            int dif = target - nums[i];
            if(pos.count(dif) && pos[dif] != i)
            {
                return {i, pos[dif]};
            }
        }
        return {};
    }
};
