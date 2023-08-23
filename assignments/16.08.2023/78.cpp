class Solution {
public:
    void solve(vector<int> arr, vector<int> output, int i,vector<vector<int>>& ans) {
        if(i== arr.size()){
            ans.push_back(output);
            return;
        }

        solve(arr, output, i+1,ans);

        output.push_back(arr[i]);
        solve(arr,output,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};