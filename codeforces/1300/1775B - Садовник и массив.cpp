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
     vector<vector<ll>>v;
     unordered_map<ll,ll>mp;
     for(int i=0;i<n;i++){
          int k;
          cin>>k;
          vector<ll>vec;
          while(k--){
               ll x;
               cin>>x;
               vec.push_back(x);
               mp[x]++;
          }
          v.push_back(vec);
     }  
         bool ans=false;
     for(int i=0;i<n;i++){
          ll cnt=0;
          for(int j=0;j<v[i].size();j++){
              if(mp[v[i][j]]>1)cnt++;
          }
          if(cnt==v[i].size()){
               ans=true;
               break;}
     }
     if(ans)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
}
return 0;}
