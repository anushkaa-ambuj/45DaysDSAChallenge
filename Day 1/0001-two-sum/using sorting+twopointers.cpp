class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        sort(nums.begin(), nums.end());
        
        int p1=0, p2=nums.size()-1;
        while (p1<p2){
            if (nums[p1]+nums[p2]==target){
                ans[0] = p1;
                ans[1] = p2;
            }
            else if (nums[p1]+nums[p2]<target){
                p1++;
            }
            else{
                 p2--;
            }
        }
        
        return ans;
    }
};