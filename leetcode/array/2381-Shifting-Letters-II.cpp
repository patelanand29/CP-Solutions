class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>v(s.size());

        for(int i=0;i<shifts.size();i++){
            if(shifts[i][2]==1) v[shifts[i][0]]++;
            else if(shifts[i][2]==0) v[shifts[i][0]]--;
            if(shifts[i][1]+1 <s.size() && shifts[i][2]==1 ) v[shifts[i][1]+1]--;
            else if (shifts[i][1]+1 <s.size() && shifts[i][2]==0 ) v[shifts[i][1]+1]++;
        }

        for(int i=1;i<s.size();i++) v[i]+=v[i-1];
        for(int i=0;i<s.size();i++) v[i]=(v[i]%26+26)%26;

        for(int i=0;i<s.size();i++){
            if(int(s[i]+v[i])<=122){s[i]+=v[i];}
            else {
                v[i]-=26;
                s[i]+=v[i];
            }
        }

        return s;
    }
};