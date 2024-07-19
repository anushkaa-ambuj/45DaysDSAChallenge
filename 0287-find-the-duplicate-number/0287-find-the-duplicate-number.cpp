class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int N = nums.size();
        
        unordered_map<int,int> mp;
        for (int i=0;i<N;i++){
            mp[nums[i]] ++;
        }
        
        for (auto &q:mp){
            if (q.second > 1){
                return q.first;
            }
        }
        return 0;
    }  
};