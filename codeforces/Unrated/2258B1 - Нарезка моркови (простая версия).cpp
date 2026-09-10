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
     ll n,m;
     cin>>n>>m;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];  
     sort(v.begin(), v.end());

     ll ans=n;
     for(int i=1;i<=m;i++){
        ll greater=v.end()-lower_bound(v.begin(),v.end(),i);
        ll doublee = upper_bound(v.begin(), v.end(), 2LL*i) - lower_bound(v.begin(),v.end(), 2LL * i);
        
        ans = max(ans,greater+doublee);
     }
        cout<<ans<<endl;
}
return 0;}
