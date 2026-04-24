class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int leftLargest[size], rightLargest[size];
        leftLargest[0] = height[0];
        rightLargest[size - 1] = height[size - 1];
        for(int i = 1; i < size - 1; ++i)
        {
            if(leftLargest[i - 1] < height[i])
                leftLargest[i] = height[i];
            else
                leftLargest[i] = leftLargest[i - 1];
        }

        for(int i = size - 2; i >= 0; --i)
        {
            if(rightLargest[i + 1] < height[i])
                rightLargest[i] = height[i];
            else
                rightLargest[i] = rightLargest[i + 1];
        }
        int count = 0;
        for(int i = 1; i < size - 1; ++i)
        {
            count += min(leftLargest[i], rightLargest[i]) - height[i];
        }
        return count;
    }
};