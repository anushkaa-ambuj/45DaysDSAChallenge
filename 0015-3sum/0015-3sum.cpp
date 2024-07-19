class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::sort(nums.begin(), nums.end()); // Sort the array to handle duplicates

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i
            
            std::unordered_set<int> seen;
            for (int j = i + 1; j < nums.size(); ++j) {
                int complement = -nums[i] - nums[j];
                if (seen.find(complement) != seen.end()) {
                    ans.push_back({nums[i], nums[j], complement});
                    // Skip duplicates for the second number
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) ++j;
                }
                seen.insert(nums[j]);
            }
        }
        return ans;
    }
};