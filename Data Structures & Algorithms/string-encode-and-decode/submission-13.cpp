class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())
            return "e";
        if(strs[0] == "" && strs.size() == 1)
            return "";
        string key = strs[0];
        for(int i = 1; i < strs.size(); ++i)
        {
            key += '.' + strs[i];
        }
        return key;
    }

    vector<string> decode(string s) {
        if(s == "e")
            return {};
        if(s == "")
            return {""};
        vector<string> val;
        string temp = "";
        for(int i = 0; i <= s.size(); ++i)
        {
            if(s[i] == '.' || i == s.size())
            {
                val.push_back(temp);
                temp = "";
                i++;
            }
            temp += s[i];
        }
        return val;
    }
};
