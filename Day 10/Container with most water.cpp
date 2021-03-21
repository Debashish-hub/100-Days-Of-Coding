// Container With Most Water

// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
// n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, 
// which, together with the x-axis forms a container, such that the container contains the most water.

// Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int  m = INT_MIN;
        for (int i = 0, j = height.size() - 1; i < j;) {
            m = max(m, (j - i) * min(height[i], height[j]));
            height[i] < height[j] ? i++ : j--;
        }
    return m;
    }
};