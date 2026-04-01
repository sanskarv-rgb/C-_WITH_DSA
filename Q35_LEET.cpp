class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int fst=0;
        int size=nums.size();
        int lst=size-1;
        int mid=0;
        while(fst<=lst){
            mid=(fst+lst)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                fst=mid+1;
            }
            else{
                lst=mid-1;
            }
        }
        return fst;

    }
};