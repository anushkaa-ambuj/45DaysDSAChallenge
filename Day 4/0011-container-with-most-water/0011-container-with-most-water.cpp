class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int i = 0; int j = height.size()-1;  
        long long ans = 0; 

        while (i < j) {
            long long current_area = min(height[i], height[j])*(j-i);
            ans = max(ans, current_area);

            if (height[i] < height[j]) {
                i++;
            } else if (height[i] > height[j]) {
                j--;
            } else {
                i++;
                j--;
            }
        }

        return ans; 
    }
};
