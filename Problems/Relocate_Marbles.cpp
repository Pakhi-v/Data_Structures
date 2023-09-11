//Relocate Marbles leetcode problem
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        vector<int>ans;
        set<int>st;
        int n=nums.size();
        int m=moveFrom.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<m;i++){
            auto it=st.find(moveFrom[i]);
            if(it!=st.end()){
               st.erase(it);
               st.insert(moveTo[i]);
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
