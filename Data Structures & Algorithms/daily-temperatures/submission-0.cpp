class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        stack<int> st;
        for(int i = temperatures.size() - 1; i >= 0; --i)
        {
            result[i] = 0;
            while(!st.empty())
            {
                if (temperatures[st.top()] > temperatures[i])
                {
                    result[i] = st.top() - i; 
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};
