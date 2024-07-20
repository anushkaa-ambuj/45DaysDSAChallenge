class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end()); // Sort the array to handle duplicates

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i
            
            int p1 = i + 1, p2 = nums.size() - 1;
            int complement = -nums[i];
            while (p1 < p2) {
                if (nums[p1] + nums[p2] == complement) {
                    ans.push_back({nums[i], nums[p1], nums[p2]});
                    // Move both pointers to the next different number to avoid duplicates
                    while (p1 < p2 && nums[p1] == nums[p1 + 1]) p1++;
                    while (p1 < p2 && nums[p2] == nums[p2 - 1]) p2--;
                    p1++;
                    p2--;
                } else if (nums[p1] + nums[p2] < complement) {
                    p1++;
                } else {
                    p2--;
                }
            }
        }
        return ans;
    }
};