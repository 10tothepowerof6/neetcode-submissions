class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() < 2) return true;
        string temp = "";
        for(int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                temp += s[i];
        }
        cout << temp << endl;
        int i = 0, j = temp.size() - 1;
        while(i <= j)
        {
            if(temp[i] != temp[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
};
