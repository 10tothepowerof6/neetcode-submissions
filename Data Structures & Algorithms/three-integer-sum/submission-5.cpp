class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if (nums.size() < 3) return result;
        sort(nums.begin(), nums.end());
        if (nums[0] == nums[nums.size() - 1] && nums[0] == 0)
        {
            result.push_back({0, 0, 0});
            return result;
        }
        int j, k;
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            j = i + 1;
            k = nums.size() - 1;
            while (j < k)
            {
                if (nums[j] + nums[k] == -nums[i])
                {
                    result.push_back({nums[i], nums[j], nums[k]});
                    do
                    {
                        ++j;
                    }while (nums[j] == nums[j - 1]);

                    do
                    {
                        --k;
                    }while (nums[k] == nums[k + 1]);
                }
                else if (nums[j] + nums[k] < -nums[i])
                {
                    ++j;
                }
                else
                {
                    --k;
                }
            }
        }
        return result;
    }
};
