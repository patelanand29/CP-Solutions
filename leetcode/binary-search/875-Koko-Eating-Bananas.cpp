class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long ans=1e9;

        long long low=1,high=1e9 ;

        while(low<=high){

            long long mid= low + (high-low)/2 , time=0;

            for(int i=0;i<piles.size();i++){
                time+= (piles[i]+mid-1)/mid;
            }

            if(time<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }

        return ans;
    }
};