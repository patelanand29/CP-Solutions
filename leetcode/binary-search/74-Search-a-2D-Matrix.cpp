class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t=0,b=matrix.size()-1,l=0,r=matrix[0].size()-1;
        int m=matrix[0].size()-1;
        while(t<b){
            int mid= (t+b)/2;
            if(matrix[mid][m]==target){
                return true;
            }
            else if(matrix[mid][m]<target){
                t=mid+1;
            }
            else b=mid;
        }    

        
        while(l<=r){
            int mid=(l+r)/2;
            if(matrix[t][mid]==target)return true;
            else if(matrix[t][mid]<target){
                l=mid+1;
            }
            else r=mid-1;
        }
    
       return false;
    }
};