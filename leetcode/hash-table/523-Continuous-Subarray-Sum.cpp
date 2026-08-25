class Solution {
public:
    bool checkSubarraySum(vector<int>& v, int k) {
        
        vector<long long>nums(v.size());
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){

            if(i>0)nums[i]+=nums[i-1];
             nums[i]%=k;
            
            if(i>0 && mp[(nums[i]%k+k)%k]>0) return true;
            if(i>0) mp[(nums[i-1]%k+k)%k]++;
            
        }
        
        return false;
    }
};