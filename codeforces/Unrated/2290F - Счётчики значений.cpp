#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];

     vector<ll>ans(n,-1);
     bool flag=true;

     for(int i=0;i<n;i++){
        if(flag){
            if(v[i]+n-i-1<=n-1 && v[i]+n-i-1 >=0 && ans[v[i]+n-i-1]==-1){
                 ans[v[i]+n-i-1]=i+1;
            }
            else{
                flag=false;
                break;
            }
           
        }
     }

     if(flag){
          for(int i=0;i<n;i++)cout<<ans[i]<<" ";
     }
     else cout<<"-1";
     cout<<endl;

}
return 0;}