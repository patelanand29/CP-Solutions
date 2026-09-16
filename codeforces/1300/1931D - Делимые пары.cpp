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
     ll n,x,y;
     cin>>n>>x>>y;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];  
     map<pair<ll,ll>,ll>mp;
     mp[{v[0]%x,v[0]%y}]++;
     
     ll ans=0;
     for(int i=1;i<n;i++){
        ans+=mp[{(x-v[i]%x)%x ,v[i]%y}];
        mp[{v[i]%x,v[i]%y}]++;
     }
     
     cout<<ans<<endl;
}
return 0;}
