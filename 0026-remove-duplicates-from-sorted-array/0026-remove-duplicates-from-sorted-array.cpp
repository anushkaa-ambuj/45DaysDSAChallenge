class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size();
        
        if (N==0 || N==1){
            return N;
        }
        
        int j=0;
        for (int i=0;i<N-1;i++){
            if (nums[i] != nums[i+1]){
                nums[j++] = nums[i];
            }
        }
        nums[j++] = nums[N-1];
        
        return j;
    }
};