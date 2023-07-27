//find first and last occurence of target value in sorted array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int startpos = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int endpos = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin() - 1;
        if(startpos < nums.size() && nums[startpos] == target){
            return {startpos,endpos};
        }
        return {-1,-1};


    }};
