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
     string s;
     cin>>s;
     ll up=0,down=0,right=0,left=0;
     for(int i=0;i<n;i++){
         if(s[i]=='U')up++;
         else if(s[i]=='D')down++;
         else if(s[i]=='R')right++;
         else left++;
     }  
     
     if((right==left&&abs(up-down)==2)||(up==down && abs(right-left)==2)){
         cout<<"YES\n";
     }
     else cout<<"NO\n";
        
}
return 0;}