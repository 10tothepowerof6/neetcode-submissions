class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1, max = -1;
        while(i < j)
        {
            int minHeights = heights[i] < heights[j] ? heights[i] : heights[j];
            max = (minHeights * (j - i)) > max ?  (minHeights * (j - i)) : max;
            if(heights[i] < heights[j])
                ++i;
            else
                --j;
        }
        return max;
    }
};
