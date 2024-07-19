class Solution {
public:
    void mergeArr(vector<int>& arr, int l, int mid, int h){
        vector<int> temp(h-l+1);
        int p1=l, p2=mid+1, p3=0;

        while (p1<=mid && p2<=h){
            if (arr[p1]<arr[p2]){
                temp[p3++] = arr[p1++];
            }
            else{
                temp[p3++] = arr[p2++];
            }
        }

        while (p1<=mid){
            temp[p3++] = arr[p1++];
        }

        while (p2<=h){
            temp[p3++] = arr[p2++];
        }

        for (int i=l;i<=h; i++){
            arr[i] = temp[i-l];
        }
    }

    void MS(vector<int>& arr, int l, int h){
        if (l==h){
            return;
        }
        int mid = (l+h)/2;
        MS(arr,l,mid);
        MS(arr,mid+1,h);
        mergeArr(arr, l, mid, h);
    }

    void sortColors(vector<int>& nums) {
        int N = nums.size();
        MS(nums,0,N-1);
    }
};