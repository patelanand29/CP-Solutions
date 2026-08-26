class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         unordered_map<int,int> mp;
         int ans=0,cnt=0,l=-1;
         for(int i=0;i<nums.size();i++){
                mp[nums[i]]++; cnt+=nums[i];
        
                while(mp[nums[i]]>1){
                    l++;
                    mp[nums[l]]--;
                    cnt-=nums[l];
                }
            ans=max(ans,cnt);    
            
         }
          return ans;
    }
   
};