class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest, max = 0;

        for(int num : nums)
        {
            if(numSet.find(num - 1) == numSet.end())
            {
                longest = 1;
                while(numSet.find(++num) != numSet.end())
                    longest++;
            }
            max = max < longest ? longest : max;
        }
        return max;
    }
};
