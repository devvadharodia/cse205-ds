class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        int rs = 0, re = n-1;
        int cs = 0, ce = m-1;
        vector<int> res;
        while(rs<=re && cs<=ce){

            for(int i=cs;i<=ce&&rs<=re;i++){
                res.push_back(matrix[rs][i]);
            }
            rs++;
            for(int i=rs;i<=re&&cs<=ce;i++){
                res.push_back(matrix[i][ce]);
            }
            ce--;
            for(int i=ce;i>=cs&&rs<=re;i--){
                res.push_back(matrix[re][i]);
            }
            re--;
            for(int i=re;i>=rs&&cs<=ce;i--){
                res.push_back(matrix[i][cs]);
            }
            cs++;
        }
        return res;
    }
};