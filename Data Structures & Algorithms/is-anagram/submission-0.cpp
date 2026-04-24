class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizeS = s.size();
        int sizeT = t.size();
        if(sizeS != sizeT)
            return false;

        vector<int> cnts(123, 0), cntt(123, 0);
        for(int i = 0; i < sizeS; ++i)
        {
            cnts[s[i]]++;
            cntt[t[i]]++;
        }

        for(int i = 1; i < 123; ++i)
        {
            if(cnts[i] != cntt[i])
            {
                return false;
            }
        }
        return true;
    }
};
