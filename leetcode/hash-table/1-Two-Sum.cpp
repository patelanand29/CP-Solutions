class Solution {
public:
    vector<int> twoSum(vector<int>& v, int sum) {
        unordered_map<int,int>mp;
        vector<int>ans(2);
        for(int i=0;i<v.size();i++){
            if(mp.find(sum-v[i])!=mp.end()){
                ans[0]=mp[sum-v[i]];
                ans[1]=i;
                return ans;
            }
            mp[v[i]]=i;
        }
        return ans;
    }
};