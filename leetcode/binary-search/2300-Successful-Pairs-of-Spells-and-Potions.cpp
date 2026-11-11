class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int>v(spells.size(),0);
        sort(potions.begin(),potions.end());
        
        for(int i=0;i<spells.size();i++){
            
            long long low=0,high=potions.size()-1,ans=-1;

            while(low<=high){
                long long mid= low + (high-low)/2;
                
                if(1LL*spells[i]*potions[mid]<success){
                    ans=mid;
                    low=mid+1;
                }
                else high=mid-1;

            }
            v[i]=potions.size()-ans-1;

        }
        return v;
    }
};