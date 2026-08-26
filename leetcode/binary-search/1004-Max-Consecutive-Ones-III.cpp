class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
         int cnt=0,ans=0;
         int l=-1;
         for(int i=0;i<v.size();i++){
            if(v[i]==0)cnt++;
            while(cnt>k){
                l++;
                if(v[l]==0)cnt--;
            }
            ans=max(ans,i-l);
         }
         return ans;
    }
};