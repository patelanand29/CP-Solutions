class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        vector<pair<long long,long long>>v(intervals.size());
        vector<int>ans(intervals.size(),-1);

        for(int i=0;i<intervals.size();i++){
            v[i].first=intervals[i][0];
            v[i].second=i;
        }
        sort(v.begin(),v.end());

        for(int i=0;i<intervals.size();i++){
            
            int low=0,high=intervals.size()-1,value=-1;


            while(low<=high){
                
                int mid= low + (high-low)/2;

                if(v[mid].first>=intervals[i][1]){
                    value=v[mid].second;
                    high=mid-1;
                }
                else low=mid+1;
            }
            ans[i]=value;
        }

        return ans;

    }
};