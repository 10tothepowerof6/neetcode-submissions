class Solution {
public:
    bool isValid(string s) {
        if (s.size() < 2 || s[0] == ')' || s[0] == '}' || s[0] == ']') return false;
        stack<char> hold;
        for(int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                hold.push(s[i]);
            else if (hold.empty() ||
                    (s[i] == ')' && hold.top() != '(') ||
                    (s[i] == '}' && hold.top() != '{') || 
                    (s[i] == ']' && hold.top() != '['))
                return false;
            else
                hold.pop();
        }
        return hold.empty();
    }
};
