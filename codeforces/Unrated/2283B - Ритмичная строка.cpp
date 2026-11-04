#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i]; 

     ll ans=INT_MAX;

     for(int j=0;j<n;j++){
        ll cnt=0;

        for(int i=0;i<n;i++){
            if(v[i]%v[j]!=0)cnt++;
        }
        ans=min(cnt,ans);
     }

     cout<<ans<<endl;
        
}
return 0;}