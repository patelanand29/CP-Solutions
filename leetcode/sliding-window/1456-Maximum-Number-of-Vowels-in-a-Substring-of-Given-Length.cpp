class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
            if(i<k-1){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') mp[s[i]]++;
            }
            else if(i==k-1){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') mp[s[i]]++;
                ans=max(ans,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
            }
            else{
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') mp[s[i]]++;
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u') mp[s[i-k]]--;
                ans=max(ans,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
            }
        }
        return ans;
    }
};