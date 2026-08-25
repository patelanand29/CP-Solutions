class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0,cnt=0,temp=0;

        for(int i=0;i<customers.size();i++){
            ans+=customers[i]*(1-grumpy[i]);}
            temp=ans;
       
        for(int i=0;i<minutes;i++){
             if(grumpy[i]==1) cnt+=customers[i];
        }
        ans=max(cnt+temp,ans);

        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i]==1) cnt+=customers[i];
            if(grumpy[i-minutes]==1) cnt-=customers[i-minutes];
            ans=max(cnt+temp,ans);
            }   
    return ans;
    }
};