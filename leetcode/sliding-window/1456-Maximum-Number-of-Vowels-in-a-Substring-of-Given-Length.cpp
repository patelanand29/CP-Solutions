class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>mp;
        int ans=0,cnt=0;
        for(int i=0;i<s.size();i++){
            
            if(i<k-1){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
            }
            else if(i==k-1){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
                ans=max(ans,cnt);
            }
            else{
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u') cnt--;
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};