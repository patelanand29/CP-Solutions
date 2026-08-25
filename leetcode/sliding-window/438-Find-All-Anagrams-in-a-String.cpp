class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

      vector<int>ans;

      if(p.length()>s.length())return ans;
      vector<int>freqs(26),freqp(26);
      for(int i=0;i<p.size();i++){
         freqp[p[i]-'a']++;
         freqs[s[i]-'a']++;
      }
      if(freqp==freqs)ans.push_back(0);

      for(int i=p.size();i<s.size();i++){
         freqs[s[i]-'a']++;
         freqs[s[i-p.size()]-'a']--;
         if(freqp==freqs)ans.push_back(i-p.size()+1);
      }
      return ans;
    } 
};