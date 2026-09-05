#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll n,l,a;
     cin>>n>>l>>a;
     vector<pair<ll,ll>>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;}
        
     ll ans=0;    
       for(int i=0;i<n;i++){
            ans+=(v[i].first-(i>0 ? v[i-1].second+v[i-1].first : 0))/a;
       }
       ans+=(l-(n>0 ? v[n-1].second+v[n-1].first : 0))/a;
      
       cout<<ans<<endl;

return 0;}
