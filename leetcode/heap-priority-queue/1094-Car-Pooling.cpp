class Solution {
public:
    bool carPooling(vector<vector<int>>& v, int capacity) {
         
        vector<int>ans(1001);
        
        for(int i=0;i<v.size();i++){
            ans[v[i][1]] += v[i][0];
            ans[v[i][2]] -= v[i][0];
        }

        for(int i=0;i<ans.size();i++){
            (i>0 ? ans[i]+=ans[i-1] : 0);
            if(ans[i]> capacity) return false;
        }

        return true;
    }
};