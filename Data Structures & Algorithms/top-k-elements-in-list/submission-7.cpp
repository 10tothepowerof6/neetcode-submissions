class Solution {
public:
    struct cmp{
        bool operator() (char a, char b) {return a > b;}
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, vector<int>, cmp> cnt;
        int temp = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != nums[i + 1])
            {
                temp++;
                cnt[temp].push_back(nums[i]);
                temp = 0;
            }
            else
                temp++;
        }

        vector<int> res;
        for(const auto& pair : cnt)
        {
            
            for(auto& i : pair.second)
            {
                if(!k)
                    break;
                res.push_back(i);
                k--;
            }
        }
        return res;
    }
};
