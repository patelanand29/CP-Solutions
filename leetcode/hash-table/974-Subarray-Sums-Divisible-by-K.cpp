class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){

            if(i>0)nums[i]+=nums[i-1];
            
            nums[i]%=k;
            
            ans+=mp[(nums[i]%k+k)%k];
            mp[(nums[i]%k+k)%k]++;
            
        }
        
        return ans;
    }
};