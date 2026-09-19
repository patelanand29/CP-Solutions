#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
     ll x;
     cin>>x;
     string s;
     cin>>s;
     ll ans=s.size();
     for(int i=1;i<=x;i++){
        ans+=(((s[i-1]-'0'-1+MOD)%MOD)*((ans-i+MOD)%MOD))%MOD;
        ans%=MOD;
        if(s.size()<x){
           string str=s.substr(i);
           for(int z=1;z<(s[i-1]-'0');z++){
            s+=str;
            if(s.size() >= x) break;
           }
        }

     }
        cout<<ans<<endl;
}
return 0;}
