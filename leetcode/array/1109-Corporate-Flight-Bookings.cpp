class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& v, int n) {
        vector<int>ans(n);
        
        for(int i=0;i<v.size();i++){
            ans[v[i][0]-1] += v[i][2];
            if(v[i][1]<n) ans[v[i][1]] -= v[i][2];
        }

        for(int i=1;i<n;i++){
            ans[i]+=ans[i-1];
        }

        return ans;
    }
};