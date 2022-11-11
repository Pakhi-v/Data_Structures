class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int element,i;
        for (i=0;i<nums.size();i++)
        {
        element=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
        if(nums[j]==element)
        {
        nums.clear();
        nums.push_back(i);
        nums.push_back(j);}
        }
        }
        return nums;  
    }
};