class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(const string& c : tokens)
        {
            if (isdigit(c[0]) || (c.size() > 1 && c[0] == '-')) 
            {
                stk.push(stoi(c));
            }
            else 
            {
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                switch(c[0])
                {
                    case '+':
                        first += second;
                        break;
                    case '-':
                        first -= second;
                        break;
                    case '*':
                        first *= second;
                        break;
                    case '/':
                        first /= second;
                        break;
                }
                stk.push(first);
            }
        }   
        return stk.top();
    }
};
