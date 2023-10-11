class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        int j=0;
        for(int i=1;i<=1000+1000;i++){
            if(j<arr.size() && i==arr[j]){
                j++;
                continue;
            }

            ans.push_back(i);
        }
        
        return ans[k-1];
    }
};