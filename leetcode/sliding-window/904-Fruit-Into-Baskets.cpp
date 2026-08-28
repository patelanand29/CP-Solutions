class Solution {
public:
    int totalFruit(vector<int>&v) {
        if(v.size()<3)return v.size();
        int idx1=0,idx2=-1,start=0,ans=0;
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[idx1]){ idx2=i; break;}
            else idx1=i;}
        int i=idx2+1;
        ans=i; 
        for(  ;i<v.size();i++){
            if(v[i]==v[idx1]){ idx1=i;}
            else if (v[i]==v[idx2]){ idx2=i;}
            else if(v[i]!=v[idx1]&&v[i]!=v[idx2]){
                if(idx1<idx2){start=idx1+1; idx1=i; }
                else{ start=idx2+1; idx2=i; }
                }
            ans=max(ans,i-start+1); 
        }
        return ans;
    }
};