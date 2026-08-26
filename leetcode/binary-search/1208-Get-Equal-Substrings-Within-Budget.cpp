class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=-1, ans=0,cnt=0;
        for(int i=0;i<s.size();i++){
            cnt+=abs(s[i]-t[i]);
            while(cnt>maxCost){
                l++;
                cnt-=abs(s[l]-t[l]);
            }
            ans=max(ans,i-l);
        }
        return ans;
    }
};