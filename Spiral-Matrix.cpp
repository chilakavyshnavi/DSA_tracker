class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int t = 0, b = mat.size() - 1;
        int l = 0, r = mat[0].size() - 1;
        vector<int> v; 
        while(t <= b && l <= r){ 
            for(int i = l; i <= r; i++){
                v.push_back(mat[t][i]);
            }
            t++; 
            for(int i = t; i <= b; i++){
                v.push_back(mat[i][r]);
            }
            r--; 
            if(t <= b){
                for(int i = r; i >= l; i--){
                    v.push_back(mat[b][i]);
                }
                b--;
            } 
            if(l <= r){
                for(int i = b; i >= t; i--){
                    v.push_back(mat[i][l]);
                }
                l++;
            }
        } 
        return v;
    }
};