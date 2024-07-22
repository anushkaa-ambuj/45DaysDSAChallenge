class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {\
        vector<int> duplicates;

        for (int num : nums) {
            int index = abs(num) - 1;  // Find the index corresponding to the current number
            if (nums[index] < 0) {  // If the value at that index is already negative, it's a duplicate
                duplicates.push_back(index + 1);
            } else {
                nums[index] = -nums[index];  // Negate the value at that index to mark it as visited
            }
        }

        return duplicates;                                        
    }
};