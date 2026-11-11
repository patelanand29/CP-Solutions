class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        long long low=*max_element(weights.begin(),weights.end()),high=1e9,ans=-1;

        while(low<=high){

            long long mid= low + (high-low)/2;
            long long count=0,cnt=1;

            for(int i=0;i<weights.size();i++){

              if(weights[i]+count > mid){
                cnt++;
                count=weights[i];
              }
              else count+=weights[i];
            }

            if(cnt<=days){
                ans=mid;
                high=mid-1;
            }
            else  low=mid+1;
        }

        return ans;
    }
};