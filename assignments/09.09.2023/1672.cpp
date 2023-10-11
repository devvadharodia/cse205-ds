class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        int sum = 0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[0].size();j++){
                sum += accounts[i][j];
            }
            maxi = max(maxi,sum);
            sum = 0;
        }      
        return maxi;
    }
};