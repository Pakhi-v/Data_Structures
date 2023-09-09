//Find the Distinct Difference Array leetcode question
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp, rmp;
        for(auto n: nums){ rmp[n]++; }
        for(auto n: nums){
            mp[n]++;
            rmp[n]--;
            if(rmp[n] == 0) rmp.erase(n);
            ans.push_back(mp.size() - rmp.size());
        }
        return ans;
    }
};
