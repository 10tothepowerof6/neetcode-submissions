class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1)
            return {strs};

        unordered_map<string, vector<string>> pos;

        for(int i = 0; i < strs.size(); ++i)
        {
            vector<int> cnt(26, 0);
            for(int j = 0; j < strs[i].size(); ++j)
            {
                cnt[strs[i][j] - 'a']++;
            }
            string key = to_string(cnt[0]);
            for(int i = 0; i < cnt.size(); ++i)
            {
                key += ',' + to_string(cnt[i]);
            }
            pos[key].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(const auto& pair : pos)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
