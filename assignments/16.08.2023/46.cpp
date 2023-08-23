class Solution {

public:
    void rec(int idx,vector<int>&nums,vector<vector<int>>&ans){
        //if our index reached nums.size() then we will and the nums in ans and return
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            rec(idx+1,nums,ans);
            //backtracking - to get return main string
            swap(nums[idx],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        rec(0,nums,ans);
        return ans;

        
    }
};