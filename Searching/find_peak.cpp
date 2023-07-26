class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = left+(right-left)/2;
        while(low<high){
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
            mid = left+(right-left)/2;
        }
        return left;

    }};