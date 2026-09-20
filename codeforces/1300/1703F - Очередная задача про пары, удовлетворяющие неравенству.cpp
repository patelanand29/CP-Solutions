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
     vector<ll>v(n),pref(n,0);
     for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<i+1){pref[i]=1;} }
      
      for(int i=1;i<n;i++){
        pref[i]+=pref[i-1]; }  
      
      ll ans=0;
      for(int i=1;i<n;i++){
          if(v[i]<i+1){
            if(v[i]-2<0){continue;}
            else if(v[i]-2<=n-1){
              ans+=pref[v[i]-2];
            }
            else ans+=pref[n-1];   
          }
      }  
     
     cout<<ans<<endl;
}
return 0;}