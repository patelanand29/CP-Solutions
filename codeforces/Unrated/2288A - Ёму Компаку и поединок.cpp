#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
     int n;
     cin>>n;
     int ans=INT_MAX;

    /* for(int i=1;i<n;i++){
        if(n+i<i+1)break;
        ans=min(ans,(n+i)/(i+1)+i);
     }

      for(int j=i;j<n;j++){
            if( ((j)*(j+1))/2- ((i-1)*(i))/2 + j-1 >= n){
                ans=min(ans,j-i+j-1);
            }
        }
     */

     for(int i=1;i<=n;i++){
       int cnt=i-1;
       int sum=0, no=i;
       while(sum<n){
             sum+=no;
             cnt+=2;
             no++;
       }
       ans=min(ans,cnt-1);
     }
       cout<<ans<<endl;

}
return 0;}