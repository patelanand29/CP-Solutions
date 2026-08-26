class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& v, int k) {
        
        int n=v.size() , m=v[0].size();

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                v[i][j]+=((i>0?v[i-1][j]:0)+(j>0?v[i][j-1]:0)-(i>0&&j>0?v[i-1][j-1]:0));
            }
        }
  
        vector<vector<int>>ans(n,vector<int>(m));
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){

                if(i+k<n && j+k<m){
                    ans[i][j] = v[i+k][j+k];
                }
                else if(i+k<n){
                    ans[i][j] = v[i+k][m-1];
                }
                else if(j+k<m){
                    ans[i][j] = v[n-1][j+k];
                }
                else{
                    ans[i][j] = v[n-1][m-1];
                }

                if(i-k-1>-1 && j-k-1>-1){
                    ans[i][j] += v[i-k-1][j-k-1];
                }
                if(i-k-1>-1 && j+k<m){
                    ans[i][j] -= v[i-k-1][j+k];
                }
                else if(i-k-1>-1){
                    ans[i][j] -= v[i-k-1][m-1];
                }
                if(j-k-1>-1 && i+k<n){
                    ans[i][j] -= v[i+k][j-k-1];
                }
                else if(j-k-1>-1){
                    ans[i][j] -= v[n-1][j-k-1];
                }
            }
        }
    
     return ans;

    }
};