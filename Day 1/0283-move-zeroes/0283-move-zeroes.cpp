class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N = nums.size();
        
        int j=0;
        for (int i=0;i<N;i++){
            if (nums[i]!=0){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
    }
};