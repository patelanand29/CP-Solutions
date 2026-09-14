class Solution {
public:
    int findMin(vector<int>& v) {
        int l=0,r=v.size()-1;
        int mini=v[0];
        while(l<=r){
           int mid=(l+r)/2;
           
            if(v[mid]>=v[l] && mid<v.size()-1 && v[mid]> v[mid+1]){
                mini = v[mid+1];
                break;
            }
            if(v[mid]>v[l]){
               l=mid+1;
               }
            else r=mid-1;
            mini=min(mini,v[mid]);   
            
        }
        return mini;
    }
};