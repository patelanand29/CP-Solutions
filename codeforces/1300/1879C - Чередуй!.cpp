#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
     string s;
     cin>>s;
     ll n=s.size();
     ll ans=0,count=1,cnt=1,cntt=0;
     for(int i=1;i<n;i++){
         if(s[i]==s[i-1] && i<n-1 && s[i]==s[i+1]){
            cnt++;
            ans++;
            cnt%=MOD;
         } 
         else if(s[i]==s[i-1] &&(i==n-1 || s[i]!=s[i+1])){
            cnt++;
            ans++;
            cnt%=MOD;

            count*=cnt;
            count%=MOD;
             
            cntt++;
            cnt=1;
         }      
     }  
     cntt=ans;
     while(cntt>0){
                count*=cntt;
                count%=MOD;
                cntt--;
            } 
     cout<<ans<<" "<<count<<endl;
        
}
return 0;}
