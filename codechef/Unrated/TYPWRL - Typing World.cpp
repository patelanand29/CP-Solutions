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
     string s,l;
     cin>>s>>l;
     unordered_map<char,char>mp;
     for(int i=0;i<l.size();i++){
         mp[l[i]]='L';
     }
     
     ll left=0,right=0,ans=0;
     
     for(int i=0;i<s.size();i++){
         if(mp[s[i]]=='L'){
             right=0;
             left++;
             ans=max(ans,left);
         }
         else{
             left=0;
             right++;
             ans=max(ans,right);
         }
     }
     cout<<ans<<endl;
        
}
return 0;}