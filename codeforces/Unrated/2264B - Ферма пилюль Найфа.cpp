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
    multiset<ll>s;
     for(int i=0;i<n;i++)cin>>v[i];  
     ll sum=0,ans=LLONG_MIN;
     for(int i=0;i<m-1;i++){
        s.insert(v[i]);
        sum+=v[i];
     }

     for(int i=m-1;i<n;i++){
         ans=max(ans,m*v[i]-sum);
         if(!s.empty() && *s.rbegin()>v[i]){
            sum-=*s.rbegin();
            s.erase(prev(s.end()));
            s.insert(v[i]);
            sum+=v[i];
         }
     }

        cout<<ans<<endl;
}
return 0;}
